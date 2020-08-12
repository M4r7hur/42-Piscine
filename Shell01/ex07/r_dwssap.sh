#!/bin/bash

grep -v "^#" /etc/passwd | sed -n 'g;n;p' | cut -d ":" -f1 | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | awk 1 ORS=', ' | sed '$s/..$//' | tr "\n" "."
