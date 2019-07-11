# include <stdio.h>
sort(int [10]); rand();
main()
{
    int arr[10]={};
    for(int i=0;i<=9;++i)
    {
	arr[i]= 10+(rand()%90);
	printf("\t%d",arr[i]);
    }
    sort(arr);
    printf("\n5th = %d",arr[5]);
    printf("\n4th = %d",arr[6]);
    printf("\n3rd = %d",arr[7]);
}

sort(int arr[10])
{
    up:for(int i=0;i<=8;++i)
    {	
        int j=i+1;
	if(arr[i] > arr[j])
	{	
            int a = arr[i];
	    arr[i] = arr[j];
	    arr[j] = a;goto up;
	}
    }
} 






Prerequisites
*.d

# Object files
*.o
*.ko
*.obj
*.elf

# Linker output
*.ilk
*.map
*.exp

# Precompiled Headers
*.gch
*.pch

# Libraries
*.lib
*.a
*.la
*.lo

# Shared objects (inc. Windows DLLs)
*.dll
*.so
*.so.*
*.dylib

# Executables
*.exe
*.out
*.app
*.i*86
*.x86_64
*.hex

# Debug files
*.dSYM/
*.su
*.idb
*.pdb

# Kernel Module Compile Results
*.mod*
*.cmd
.tmp_versions/
modules.order
Module.symvers
Mkfile.old
dkms.conf
