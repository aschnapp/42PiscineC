ifconfig | awk '/ether/{print $2}' | grep : 