 cat /etc/passwd | grep -v '#' | awk 'NR%2==0' | cut -d : -f 1 | rev | sort -r | awk -v line_one="$FT_LINE1" -v line_two="$FT_LINE2" 'NR==line_one,NR==line_two'  | tr '\n' ' ' | sed '$ s/ $/./' | sed 's/ /, /g' | tr -d '\n'


