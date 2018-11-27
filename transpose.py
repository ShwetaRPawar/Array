def trans(a):
	rowlen=len(a)
	collen=len(a[0])
	print(rowlen)
	print(collen)
	b=[]
	c=[]
	for i in range(0,collen):
		for j in range(0,rowlen):
			b.append(a[j][i])
		c.append(b)
		b=[]
	print(c)
	for i in range(0,collen):
		for j in range(0,rowlen):
			print(c[i][j],end=" ")
		print()


a=[[1,2,3,4],[5,6,7,8],[9,10,11,12]]
trans(a)
