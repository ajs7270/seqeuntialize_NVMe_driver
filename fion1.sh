#fio --group_reporting --name=jsm --directory=/mnt/jsm0/ --rw=read --numjobs=1 --size=1MB --bs=4KB --direct=1 --fsync=0 --nrfiles=1 --ioengine=posixaio 
#fio --group_reporting --name=jsm --directory=/mnt/jsm0/ --rw=randwrite --numjobs=8 --size=300MB --bs=4KB --direct=1 --fsync=0 --nrfiles=1 --ioengine=posixaio --verify=meta
#fio --group_reporting --name=jsm --directory=/mnt/jsm0/ --rw=randwrite --numjobs=8 --size=1GB --bs=4KB --direct=1 --fsync=0 --nrfiles=1 --ioengine=posixaio 
#fio --group_reporting --name=jsm --directory=/mnt/jsm0/ --rw=randwrite --numjobs=32 --size=1000MB --bs=4KB --direct=1 --fsync=0 --nrfiles=1 --ioengine=posixaio --verify=meta
fio --group_reporting --name=jsm --directory=/mnt/jsm1/ --rw=read --numjobs=16 --size=100MB --bs=4KB --direct=1 --fsync=0 --nrfiles=1 --ioengine=posixaio --verify=md5
#fio --group_reporting --name=jsm --directory=/mnt/jsm0/ --rw=read --numjobs=1 --size=1000MB --bs=4KB --direct=1 --fsync=0 --nrfiles=1 --ioengine=posixaio 