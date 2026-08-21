.class Lcom/qihoo360/loader2/IPluginHost$Stub$Proxy;
.super Ljava/lang/Object;
.source "IPluginHost.java"

# interfaces
.implements Lcom/qihoo360/loader2/IPluginHost;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/qihoo360/loader2/IPluginHost$Stub;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "Proxy"
.end annotation


# static fields
.field public static sDefaultImpl:Lcom/qihoo360/loader2/IPluginHost;


# instance fields
.field private mRemote:Landroid/os/IBinder;


# direct methods
.method constructor <init>(Landroid/os/IBinder;)V
    .locals 0

    .line 642
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 643
    iput-object p1, p0, Lcom/qihoo360/loader2/IPluginHost$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    return-void
.end method


# virtual methods
.method public asBinder()Landroid/os/IBinder;
    .locals 1

    .line 647
    iget-object v0, p0, Lcom/qihoo360/loader2/IPluginHost$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    return-object v0
.end method

.method public attachPluginProcess(Ljava/lang/String;ILandroid/os/IBinder;Ljava/lang/String;)Ljava/lang/String;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 748
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 749
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.loader2.IPluginHost"

    .line 752
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 753
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 754
    invoke-virtual {v0, p2}, Landroid/os/Parcel;->writeInt(I)V

    .line 755
    invoke-virtual {v0, p3}, Landroid/os/Parcel;->writeStrongBinder(Landroid/os/IBinder;)V

    .line 756
    invoke-virtual {v0, p4}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 757
    iget-object v2, p0, Lcom/qihoo360/loader2/IPluginHost$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/4 v3, 0x5

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 758
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 759
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    invoke-interface {v2, p1, p2, p3, p4}, Lcom/qihoo360/loader2/IPluginHost;->attachPluginProcess(Ljava/lang/String;ILandroid/os/IBinder;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 765
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 766
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    .line 761
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 762
    invoke-virtual {v1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 765
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 766
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    :catchall_0
    move-exception p1

    .line 765
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 766
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public dump()Ljava/lang/String;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1423
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1424
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.loader2.IPluginHost"

    .line 1427
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1428
    iget-object v2, p0, Lcom/qihoo360/loader2/IPluginHost$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x21

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1429
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1430
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    invoke-interface {v2}, Lcom/qihoo360/loader2/IPluginHost;->dump()Ljava/lang/String;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1436
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1437
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    .line 1432
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 1433
    invoke-virtual {v1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1436
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1437
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    :catchall_0
    move-exception v2

    .line 1436
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1437
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw v2
.end method

.method public fetchBinder(Ljava/lang/String;)Landroid/os/IBinder;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 675
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 676
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.loader2.IPluginHost"

    .line 679
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 680
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 681
    iget-object v2, p0, Lcom/qihoo360/loader2/IPluginHost$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/4 v3, 0x2

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 682
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 683
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/qihoo360/loader2/IPluginHost;->fetchBinder(Ljava/lang/String;)Landroid/os/IBinder;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 689
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 690
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    .line 685
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 686
    invoke-virtual {v1}, Landroid/os/Parcel;->readStrongBinder()Landroid/os/IBinder;

    move-result-object p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 689
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 690
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    :catchall_0
    move-exception p1

    .line 689
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 690
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public fetchManagerServer()Lcom/qihoo360/replugin/packages/IPluginManagerServer;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1326
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1327
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.loader2.IPluginHost"

    .line 1330
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1331
    iget-object v2, p0, Lcom/qihoo360/loader2/IPluginHost$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x1d

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1332
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1333
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    invoke-interface {v2}, Lcom/qihoo360/loader2/IPluginHost;->fetchManagerServer()Lcom/qihoo360/replugin/packages/IPluginManagerServer;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1339
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1340
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    .line 1335
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 1336
    invoke-virtual {v1}, Landroid/os/Parcel;->readStrongBinder()Landroid/os/IBinder;

    move-result-object v2

    invoke-static {v2}, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub;->asInterface(Landroid/os/IBinder;)Lcom/qihoo360/replugin/packages/IPluginManagerServer;

    move-result-object v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1339
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1340
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    :catchall_0
    move-exception v2

    .line 1339
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1340
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw v2
.end method

.method public fetchPersistentCookie()J
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 696
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 697
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.loader2.IPluginHost"

    .line 700
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 701
    iget-object v2, p0, Lcom/qihoo360/loader2/IPluginHost$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/4 v3, 0x3

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 702
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 703
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    invoke-interface {v2}, Lcom/qihoo360/loader2/IPluginHost;->fetchPersistentCookie()J

    move-result-wide v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 709
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 710
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-wide v2

    .line 705
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 706
    invoke-virtual {v1}, Landroid/os/Parcel;->readLong()J

    move-result-wide v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 709
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 710
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-wide v2

    :catchall_0
    move-exception v2

    .line 709
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 710
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw v2
.end method

.method public fetchServiceServer()Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1302
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1303
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.loader2.IPluginHost"

    .line 1306
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1307
    iget-object v2, p0, Lcom/qihoo360/loader2/IPluginHost$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x1c

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1308
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1309
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    invoke-interface {v2}, Lcom/qihoo360/loader2/IPluginHost;->fetchServiceServer()Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1315
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1316
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    .line 1311
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 1312
    invoke-virtual {v1}, Landroid/os/Parcel;->readStrongBinder()Landroid/os/IBinder;

    move-result-object v2

    invoke-static {v2}, Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer$Stub;->asInterface(Landroid/os/IBinder;)Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;

    move-result-object v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1315
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1316
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    :catchall_0
    move-exception v2

    .line 1315
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1316
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw v2
.end method

.method public getInterfaceDescriptor()Ljava/lang/String;
    .locals 1

    const-string v0, "com.qihoo360.loader2.IPluginHost"

    return-object v0
.end method

.method public getPidByProcessName(Ljava/lang/String;)I
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1375
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1376
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.loader2.IPluginHost"

    .line 1379
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1380
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 1381
    iget-object v2, p0, Lcom/qihoo360/loader2/IPluginHost$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x1f

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1382
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1383
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/qihoo360/loader2/IPluginHost;->getPidByProcessName(Ljava/lang/String;)I

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1389
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1390
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return p1

    .line 1385
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 1386
    invoke-virtual {v1}, Landroid/os/Parcel;->readInt()I

    move-result p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1389
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1390
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return p1

    :catchall_0
    move-exception p1

    .line 1389
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1390
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public getProcessNameByPid(I)Ljava/lang/String;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1399
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1400
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.loader2.IPluginHost"

    .line 1403
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1404
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeInt(I)V

    .line 1405
    iget-object v2, p0, Lcom/qihoo360/loader2/IPluginHost$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x20

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1406
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1407
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/qihoo360/loader2/IPluginHost;->getProcessNameByPid(I)Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1413
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1414
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    .line 1409
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 1410
    invoke-virtual {v1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1413
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1414
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    :catchall_0
    move-exception p1

    .line 1413
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1414
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public getTaskAffinityGroupIndex(Ljava/lang/String;)I
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1351
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1352
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.loader2.IPluginHost"

    .line 1355
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1356
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 1357
    iget-object v2, p0, Lcom/qihoo360/loader2/IPluginHost$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x1e

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1358
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1359
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/qihoo360/loader2/IPluginHost;->getTaskAffinityGroupIndex(Ljava/lang/String;)I

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1365
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1366
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return p1

    .line 1361
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 1362
    invoke-virtual {v1}, Landroid/os/Parcel;->readInt()I

    move-result p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1365
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1366
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return p1

    :catchall_0
    move-exception p1

    .line 1365
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1366
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public installBinder(Ljava/lang/String;Landroid/os/IBinder;)V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 655
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 656
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.loader2.IPluginHost"

    .line 658
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 659
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 660
    invoke-virtual {v0, p2}, Landroid/os/Parcel;->writeStrongBinder(Landroid/os/IBinder;)V

    .line 661
    iget-object v2, p0, Lcom/qihoo360/loader2/IPluginHost$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/4 v3, 0x1

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 662
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 663
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    invoke-interface {v2, p1, p2}, Lcom/qihoo360/loader2/IPluginHost;->installBinder(Ljava/lang/String;Landroid/os/IBinder;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 669
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 670
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 666
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 669
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 670
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception p1

    .line 669
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 670
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public isProcessAlive(Ljava/lang/String;)Z
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1224
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1225
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.loader2.IPluginHost"

    .line 1228
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1229
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 1230
    iget-object v2, p0, Lcom/qihoo360/loader2/IPluginHost$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x19

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1231
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1232
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/qihoo360/loader2/IPluginHost;->isProcessAlive(Ljava/lang/String;)Z

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1238
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1239
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return p1

    .line 1234
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 1235
    invoke-virtual {v1}, Landroid/os/Parcel;->readInt()I

    move-result p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz p1, :cond_1

    const/4 v4, 0x1

    .line 1238
    :cond_1
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1239
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return v4

    :catchall_0
    move-exception p1

    .line 1238
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1239
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public listPlugins()Ljava/util/List;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/qihoo360/replugin/model/PluginInfo;",
            ">;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 772
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 773
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.loader2.IPluginHost"

    .line 776
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 777
    iget-object v2, p0, Lcom/qihoo360/loader2/IPluginHost$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/4 v3, 0x6

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 778
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 779
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    invoke-interface {v2}, Lcom/qihoo360/loader2/IPluginHost;->listPlugins()Ljava/util/List;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 785
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 786
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    .line 781
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 782
    sget-object v2, Lcom/qihoo360/replugin/model/PluginInfo;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-virtual {v1, v2}, Landroid/os/Parcel;->createTypedArrayList(Landroid/os/Parcelable$Creator;)Ljava/util/ArrayList;

    move-result-object v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 785
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 786
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    :catchall_0
    move-exception v2

    .line 785
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 786
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw v2
.end method

.method public onReceive(Ljava/lang/String;Ljava/lang/String;Landroid/content/Intent;)V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 978
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 979
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.loader2.IPluginHost"

    .line 981
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 982
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 983
    invoke-virtual {v0, p2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    const/4 v2, 0x0

    if-eqz p3, :cond_0

    const/4 v3, 0x1

    .line 985
    invoke-virtual {v0, v3}, Landroid/os/Parcel;->writeInt(I)V

    .line 986
    invoke-virtual {p3, v0, v2}, Landroid/content/Intent;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_0

    .line 989
    :cond_0
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInt(I)V

    .line 991
    :goto_0
    iget-object v3, p0, Lcom/qihoo360/loader2/IPluginHost$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v4, 0xf

    invoke-interface {v3, v4, v0, v1, v2}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_1

    .line 992
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 993
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    invoke-interface {v2, p1, p2, p3}, Lcom/qihoo360/loader2/IPluginHost;->onReceive(Ljava/lang/String;Ljava/lang/String;Landroid/content/Intent;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 999
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1000
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 996
    :cond_1
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 999
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1000
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception p1

    .line 999
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1000
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public pluginDownloaded(Ljava/lang/String;Z)Lcom/qihoo360/replugin/model/PluginInfo;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1051
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1052
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.loader2.IPluginHost"

    .line 1055
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1056
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    const/4 v2, 0x0

    if-eqz p2, :cond_0

    const/4 v3, 0x1

    goto :goto_0

    :cond_0
    move v3, v2

    .line 1057
    :goto_0
    invoke-virtual {v0, v3}, Landroid/os/Parcel;->writeInt(I)V

    .line 1058
    iget-object v3, p0, Lcom/qihoo360/loader2/IPluginHost$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v4, 0x12

    invoke-interface {v3, v4, v0, v1, v2}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_1

    .line 1059
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 1060
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    invoke-interface {v2, p1, p2}, Lcom/qihoo360/loader2/IPluginHost;->pluginDownloaded(Ljava/lang/String;Z)Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1071
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1072
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    .line 1062
    :cond_1
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 1063
    invoke-virtual {v1}, Landroid/os/Parcel;->readInt()I

    move-result p1

    if-eqz p1, :cond_2

    .line 1064
    sget-object p1, Lcom/qihoo360/replugin/model/PluginInfo;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {p1, v1}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/qihoo360/replugin/model/PluginInfo;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :cond_2
    const/4 p1, 0x0

    .line 1071
    :goto_1
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1072
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    :catchall_0
    move-exception p1

    .line 1071
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1072
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public pluginExtracted(Ljava/lang/String;)Z
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1105
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1106
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.loader2.IPluginHost"

    .line 1109
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1110
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 1111
    iget-object v2, p0, Lcom/qihoo360/loader2/IPluginHost$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x14

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1112
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1113
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/qihoo360/loader2/IPluginHost;->pluginExtracted(Ljava/lang/String;)Z

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1119
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1120
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return p1

    .line 1115
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 1116
    invoke-virtual {v1}, Landroid/os/Parcel;->readInt()I

    move-result p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz p1, :cond_1

    const/4 v4, 0x1

    .line 1119
    :cond_1
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1120
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return v4

    :catchall_0
    move-exception p1

    .line 1119
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1120
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public pluginUninstalled(Lcom/qihoo360/replugin/model/PluginInfo;)Z
    .locals 6
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1078
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1079
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.loader2.IPluginHost"

    .line 1082
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    const/4 v2, 0x1

    const/4 v3, 0x0

    if-eqz p1, :cond_0

    .line 1084
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInt(I)V

    .line 1085
    invoke-virtual {p1, v0, v3}, Lcom/qihoo360/replugin/model/PluginInfo;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_0

    .line 1088
    :cond_0
    invoke-virtual {v0, v3}, Landroid/os/Parcel;->writeInt(I)V

    .line 1090
    :goto_0
    iget-object v4, p0, Lcom/qihoo360/loader2/IPluginHost$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v5, 0x13

    invoke-interface {v4, v5, v0, v1, v3}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v4

    if-nez v4, :cond_1

    .line 1091
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v4

    if-eqz v4, :cond_1

    .line 1092
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/qihoo360/loader2/IPluginHost;->pluginUninstalled(Lcom/qihoo360/replugin/model/PluginInfo;)Z

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1098
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1099
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return p1

    .line 1094
    :cond_1
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 1095
    invoke-virtual {v1}, Landroid/os/Parcel;->readInt()I

    move-result p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz p1, :cond_2

    goto :goto_1

    :cond_2
    move v2, v3

    .line 1098
    :goto_1
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1099
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return v2

    :catchall_0
    move-exception p1

    .line 1098
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1099
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public queryPluginBinder(Ljava/lang/String;Ljava/lang/String;)Landroid/os/IBinder;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1245
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1246
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.loader2.IPluginHost"

    .line 1249
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1250
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 1251
    invoke-virtual {v0, p2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 1252
    iget-object v2, p0, Lcom/qihoo360/loader2/IPluginHost$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x1a

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1253
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1254
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    invoke-interface {v2, p1, p2}, Lcom/qihoo360/loader2/IPluginHost;->queryPluginBinder(Ljava/lang/String;Ljava/lang/String;)Landroid/os/IBinder;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1260
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1261
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    .line 1256
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 1257
    invoke-virtual {v1}, Landroid/os/Parcel;->readStrongBinder()Landroid/os/IBinder;

    move-result-object p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1260
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1261
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    :catchall_0
    move-exception p1

    .line 1260
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1261
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public queryPluginsReceiverList(Landroid/content/Intent;)Ljava/util/List;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1270
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1271
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.loader2.IPluginHost"

    .line 1274
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    const/4 v2, 0x0

    if-eqz p1, :cond_0

    const/4 v3, 0x1

    .line 1276
    invoke-virtual {v0, v3}, Landroid/os/Parcel;->writeInt(I)V

    .line 1277
    invoke-virtual {p1, v0, v2}, Landroid/content/Intent;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_0

    .line 1280
    :cond_0
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInt(I)V

    .line 1282
    :goto_0
    iget-object v3, p0, Lcom/qihoo360/loader2/IPluginHost$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v4, 0x1b

    invoke-interface {v3, v4, v0, v1, v2}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_1

    .line 1283
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 1284
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/qihoo360/loader2/IPluginHost;->queryPluginsReceiverList(Landroid/content/Intent;)Ljava/util/List;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1291
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1292
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    .line 1286
    :cond_1
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 1287
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object p1

    .line 1288
    invoke-virtual {v1, p1}, Landroid/os/Parcel;->readArrayList(Ljava/lang/ClassLoader;)Ljava/util/ArrayList;

    move-result-object p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1291
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1292
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    :catchall_0
    move-exception p1

    .line 1291
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1292
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public regActivity(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 792
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 793
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.loader2.IPluginHost"

    .line 795
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 796
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeInt(I)V

    .line 797
    invoke-virtual {v0, p2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 798
    invoke-virtual {v0, p3}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 799
    invoke-virtual {v0, p4}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 800
    iget-object v2, p0, Lcom/qihoo360/loader2/IPluginHost$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/4 v3, 0x7

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 801
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 802
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    invoke-interface {v2, p1, p2, p3, p4}, Lcom/qihoo360/loader2/IPluginHost;->regActivity(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 808
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 809
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 805
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 808
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 809
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception p1

    .line 808
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 809
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public regPluginBinder(Lcom/qihoo360/loader2/PluginBinderInfo;Landroid/os/IBinder;)V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 878
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 879
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.loader2.IPluginHost"

    .line 881
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    const/4 v2, 0x0

    if-eqz p1, :cond_0

    const/4 v3, 0x1

    .line 883
    invoke-virtual {v0, v3}, Landroid/os/Parcel;->writeInt(I)V

    .line 884
    invoke-virtual {p1, v0, v2}, Lcom/qihoo360/loader2/PluginBinderInfo;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_0

    .line 887
    :cond_0
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInt(I)V

    .line 889
    :goto_0
    invoke-virtual {v0, p2}, Landroid/os/Parcel;->writeStrongBinder(Landroid/os/IBinder;)V

    .line 890
    iget-object v3, p0, Lcom/qihoo360/loader2/IPluginHost$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v4, 0xb

    invoke-interface {v3, v4, v0, v1, v2}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_1

    .line 891
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 892
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    invoke-interface {v2, p1, p2}, Lcom/qihoo360/loader2/IPluginHost;->regPluginBinder(Lcom/qihoo360/loader2/PluginBinderInfo;Landroid/os/IBinder;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 898
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 899
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 895
    :cond_1
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 898
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 899
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception p1

    .line 898
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 899
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public regReceiver(Ljava/lang/String;Ljava/util/Map;)V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 933
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 934
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.loader2.IPluginHost"

    .line 936
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 937
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 938
    invoke-virtual {v0, p2}, Landroid/os/Parcel;->writeMap(Ljava/util/Map;)V

    .line 939
    iget-object v2, p0, Lcom/qihoo360/loader2/IPluginHost$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0xd

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 940
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 941
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    invoke-interface {v2, p1, p2}, Lcom/qihoo360/loader2/IPluginHost;->regReceiver(Ljava/lang/String;Ljava/util/Map;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 947
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 948
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 944
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 947
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 948
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception p1

    .line 947
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 948
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public regService(ILjava/lang/String;Ljava/lang/String;)V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 836
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 837
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.loader2.IPluginHost"

    .line 839
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 840
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeInt(I)V

    .line 841
    invoke-virtual {v0, p2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 842
    invoke-virtual {v0, p3}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 843
    iget-object v2, p0, Lcom/qihoo360/loader2/IPluginHost$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x9

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 844
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 845
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    invoke-interface {v2, p1, p2, p3}, Lcom/qihoo360/loader2/IPluginHost;->regService(ILjava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 851
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 852
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 848
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 851
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 852
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception p1

    .line 851
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 852
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public sendIntent2Plugin(Ljava/lang/String;Landroid/content/Intent;)V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1149
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    :try_start_0
    const-string v1, "com.qihoo360.loader2.IPluginHost"

    .line 1151
    invoke-virtual {v0, v1}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1152
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eqz p2, :cond_0

    .line 1154
    invoke-virtual {v0, v1}, Landroid/os/Parcel;->writeInt(I)V

    .line 1155
    invoke-virtual {p2, v0, v2}, Landroid/content/Intent;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_0

    .line 1158
    :cond_0
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInt(I)V

    .line 1160
    :goto_0
    iget-object v2, p0, Lcom/qihoo360/loader2/IPluginHost$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x16

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v4, v1}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v1

    if-nez v1, :cond_1

    .line 1161
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 1162
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v1

    invoke-interface {v1, p1, p2}, Lcom/qihoo360/loader2/IPluginHost;->sendIntent2Plugin(Ljava/lang/String;Landroid/content/Intent;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1167
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :cond_1
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception p1

    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public sendIntent2PluginSync(Ljava/lang/String;Landroid/content/Intent;)V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1198
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1199
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.loader2.IPluginHost"

    .line 1201
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1202
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    const/4 v2, 0x0

    if-eqz p2, :cond_0

    const/4 v3, 0x1

    .line 1204
    invoke-virtual {v0, v3}, Landroid/os/Parcel;->writeInt(I)V

    .line 1205
    invoke-virtual {p2, v0, v2}, Landroid/content/Intent;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_0

    .line 1208
    :cond_0
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInt(I)V

    .line 1210
    :goto_0
    iget-object v3, p0, Lcom/qihoo360/loader2/IPluginHost$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v4, 0x18

    invoke-interface {v3, v4, v0, v1, v2}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_1

    .line 1211
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 1212
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    invoke-interface {v2, p1, p2}, Lcom/qihoo360/loader2/IPluginHost;->sendIntent2PluginSync(Ljava/lang/String;Landroid/content/Intent;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1218
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1219
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 1215
    :cond_1
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1218
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1219
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception p1

    .line 1218
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1219
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public sendIntent2Process(Ljava/lang/String;Landroid/content/Intent;)V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1126
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    :try_start_0
    const-string v1, "com.qihoo360.loader2.IPluginHost"

    .line 1128
    invoke-virtual {v0, v1}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1129
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eqz p2, :cond_0

    .line 1131
    invoke-virtual {v0, v1}, Landroid/os/Parcel;->writeInt(I)V

    .line 1132
    invoke-virtual {p2, v0, v2}, Landroid/content/Intent;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_0

    .line 1135
    :cond_0
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInt(I)V

    .line 1137
    :goto_0
    iget-object v2, p0, Lcom/qihoo360/loader2/IPluginHost$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x15

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v4, v1}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v1

    if-nez v1, :cond_1

    .line 1138
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 1139
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v1

    invoke-interface {v1, p1, p2}, Lcom/qihoo360/loader2/IPluginHost;->sendIntent2Process(Ljava/lang/String;Landroid/content/Intent;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1144
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :cond_1
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception p1

    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public sendIntent2ProcessSync(Ljava/lang/String;Landroid/content/Intent;)V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1172
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1173
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.loader2.IPluginHost"

    .line 1175
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1176
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    const/4 v2, 0x0

    if-eqz p2, :cond_0

    const/4 v3, 0x1

    .line 1178
    invoke-virtual {v0, v3}, Landroid/os/Parcel;->writeInt(I)V

    .line 1179
    invoke-virtual {p2, v0, v2}, Landroid/content/Intent;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_0

    .line 1182
    :cond_0
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInt(I)V

    .line 1184
    :goto_0
    iget-object v3, p0, Lcom/qihoo360/loader2/IPluginHost$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v4, 0x17

    invoke-interface {v3, v4, v0, v1, v2}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_1

    .line 1185
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 1186
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    invoke-interface {v2, p1, p2}, Lcom/qihoo360/loader2/IPluginHost;->sendIntent2ProcessSync(Ljava/lang/String;Landroid/content/Intent;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1192
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1193
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 1189
    :cond_1
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1192
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1193
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception p1

    .line 1192
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1193
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public startPluginProcess(Ljava/lang/String;ILcom/qihoo360/loader2/PluginBinderInfo;)Lcom/qihoo360/loader2/IPluginClient;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 716
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 717
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.loader2.IPluginHost"

    .line 720
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 721
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 722
    invoke-virtual {v0, p2}, Landroid/os/Parcel;->writeInt(I)V

    const/4 v2, 0x0

    if-eqz p3, :cond_0

    const/4 v3, 0x1

    .line 724
    invoke-virtual {v0, v3}, Landroid/os/Parcel;->writeInt(I)V

    .line 725
    invoke-virtual {p3, v0, v2}, Lcom/qihoo360/loader2/PluginBinderInfo;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_0

    .line 728
    :cond_0
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInt(I)V

    .line 730
    :goto_0
    iget-object v3, p0, Lcom/qihoo360/loader2/IPluginHost$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/4 v4, 0x4

    invoke-interface {v3, v4, v0, v1, v2}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_1

    .line 731
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 732
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    invoke-interface {v2, p1, p2, p3}, Lcom/qihoo360/loader2/IPluginHost;->startPluginProcess(Ljava/lang/String;ILcom/qihoo360/loader2/PluginBinderInfo;)Lcom/qihoo360/loader2/IPluginClient;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 741
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 742
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    .line 734
    :cond_1
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 735
    invoke-virtual {v1}, Landroid/os/Parcel;->readStrongBinder()Landroid/os/IBinder;

    move-result-object p1

    invoke-static {p1}, Lcom/qihoo360/loader2/IPluginClient$Stub;->asInterface(Landroid/os/IBinder;)Lcom/qihoo360/loader2/IPluginClient;

    move-result-object p1

    .line 736
    invoke-virtual {v1}, Landroid/os/Parcel;->readInt()I

    move-result p2

    if-eqz p2, :cond_2

    .line 737
    invoke-virtual {p3, v1}, Lcom/qihoo360/loader2/PluginBinderInfo;->readFromParcel(Landroid/os/Parcel;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 741
    :cond_2
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 742
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    :catchall_0
    move-exception p1

    .line 741
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 742
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public sumBinders(I)I
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1005
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1006
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.loader2.IPluginHost"

    .line 1009
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1010
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeInt(I)V

    .line 1011
    iget-object v2, p0, Lcom/qihoo360/loader2/IPluginHost$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x10

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1012
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1013
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/qihoo360/loader2/IPluginHost;->sumBinders(I)I

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1019
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1020
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return p1

    .line 1015
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 1016
    invoke-virtual {v1}, Landroid/os/Parcel;->readInt()I

    move-result p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1019
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1020
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return p1

    :catchall_0
    move-exception p1

    .line 1019
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1020
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public unregActivity(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 814
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 815
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.loader2.IPluginHost"

    .line 817
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 818
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeInt(I)V

    .line 819
    invoke-virtual {v0, p2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 820
    invoke-virtual {v0, p3}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 821
    invoke-virtual {v0, p4}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 822
    iget-object v2, p0, Lcom/qihoo360/loader2/IPluginHost$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x8

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 823
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 824
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    invoke-interface {v2, p1, p2, p3, p4}, Lcom/qihoo360/loader2/IPluginHost;->unregActivity(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 830
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 831
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 827
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 830
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 831
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception p1

    .line 830
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 831
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public unregPluginBinder(Lcom/qihoo360/loader2/PluginBinderInfo;Landroid/os/IBinder;)V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 904
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 905
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.loader2.IPluginHost"

    .line 907
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    const/4 v2, 0x0

    if-eqz p1, :cond_0

    const/4 v3, 0x1

    .line 909
    invoke-virtual {v0, v3}, Landroid/os/Parcel;->writeInt(I)V

    .line 910
    invoke-virtual {p1, v0, v2}, Lcom/qihoo360/loader2/PluginBinderInfo;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_0

    .line 913
    :cond_0
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInt(I)V

    .line 915
    :goto_0
    invoke-virtual {v0, p2}, Landroid/os/Parcel;->writeStrongBinder(Landroid/os/IBinder;)V

    .line 916
    iget-object v3, p0, Lcom/qihoo360/loader2/IPluginHost$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v4, 0xc

    invoke-interface {v3, v4, v0, v1, v2}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_1

    .line 917
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 918
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    invoke-interface {v2, p1, p2}, Lcom/qihoo360/loader2/IPluginHost;->unregPluginBinder(Lcom/qihoo360/loader2/PluginBinderInfo;Landroid/os/IBinder;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 924
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 925
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 921
    :cond_1
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 924
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 925
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception p1

    .line 924
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 925
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public unregReceiver()V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 953
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 954
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.loader2.IPluginHost"

    .line 956
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 957
    iget-object v2, p0, Lcom/qihoo360/loader2/IPluginHost$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0xe

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 958
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 959
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    invoke-interface {v2}, Lcom/qihoo360/loader2/IPluginHost;->unregReceiver()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 965
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 966
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 962
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 965
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 966
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception v2

    .line 965
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 966
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw v2
.end method

.method public unregService(ILjava/lang/String;Ljava/lang/String;)V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 857
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 858
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.loader2.IPluginHost"

    .line 860
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 861
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeInt(I)V

    .line 862
    invoke-virtual {v0, p2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 863
    invoke-virtual {v0, p3}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 864
    iget-object v2, p0, Lcom/qihoo360/loader2/IPluginHost$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0xa

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 865
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 866
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    invoke-interface {v2, p1, p2, p3}, Lcom/qihoo360/loader2/IPluginHost;->unregService(ILjava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 872
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 873
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 869
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 872
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 873
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception p1

    .line 872
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 873
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public updatePluginInfo(Lcom/qihoo360/replugin/model/PluginInfo;)V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1026
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1027
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.loader2.IPluginHost"

    .line 1029
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    const/4 v2, 0x0

    if-eqz p1, :cond_0

    const/4 v3, 0x1

    .line 1031
    invoke-virtual {v0, v3}, Landroid/os/Parcel;->writeInt(I)V

    .line 1032
    invoke-virtual {p1, v0, v2}, Lcom/qihoo360/replugin/model/PluginInfo;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_0

    .line 1035
    :cond_0
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInt(I)V

    .line 1037
    :goto_0
    iget-object v3, p0, Lcom/qihoo360/loader2/IPluginHost$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v4, 0x11

    invoke-interface {v3, v4, v0, v1, v2}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_1

    .line 1038
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 1039
    invoke-static {}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/qihoo360/loader2/IPluginHost;->updatePluginInfo(Lcom/qihoo360/replugin/model/PluginInfo;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1045
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1046
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 1042
    :cond_1
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1045
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1046
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception p1

    .line 1045
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1046
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method
