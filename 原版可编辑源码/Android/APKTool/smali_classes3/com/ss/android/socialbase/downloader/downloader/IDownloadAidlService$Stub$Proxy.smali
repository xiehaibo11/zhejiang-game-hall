.class Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "Proxy"
.end annotation


# static fields
.field public static sDefaultImpl:Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;


# instance fields
.field private mRemote:Landroid/os/IBinder;


# direct methods
.method constructor <init>(Landroid/os/IBinder;)V
    .locals 0

    .line 871
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 872
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    return-void
.end method


# virtual methods
.method public addDownloadChunk(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;)V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1657
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1658
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 1660
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    const/4 v2, 0x0

    if-eqz p1, :cond_0

    const/4 v3, 0x1

    .line 1662
    invoke-virtual {v0, v3}, Landroid/os/Parcel;->writeInt(I)V

    .line 1663
    invoke-virtual {p1, v0, v2}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_0

    .line 1666
    :cond_0
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInt(I)V

    .line 1668
    :goto_0
    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v4, 0x26

    invoke-interface {v3, v4, v0, v1, v2}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_1

    .line 1669
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 1670
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->addDownloadChunk(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1676
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1677
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 1673
    :cond_1
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1676
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1677
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception p1

    .line 1676
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1677
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public addDownloadListener(IILcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;IZ)V
    .locals 9
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1402
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1403
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 1405
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1406
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeInt(I)V

    .line 1407
    invoke-virtual {v0, p2}, Landroid/os/Parcel;->writeInt(I)V

    if-eqz p3, :cond_0

    .line 1408
    invoke-interface {p3}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;->asBinder()Landroid/os/IBinder;

    move-result-object v2

    goto :goto_0

    :cond_0
    const/4 v2, 0x0

    :goto_0
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeStrongBinder(Landroid/os/IBinder;)V

    .line 1409
    invoke-virtual {v0, p4}, Landroid/os/Parcel;->writeInt(I)V

    const/4 v2, 0x0

    if-eqz p5, :cond_1

    const/4 v3, 0x1

    goto :goto_1

    :cond_1
    move v3, v2

    .line 1410
    :goto_1
    invoke-virtual {v0, v3}, Landroid/os/Parcel;->writeInt(I)V

    .line 1411
    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v4, 0x1a

    invoke-interface {v3, v4, v0, v1, v2}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_2

    .line 1412
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_2

    .line 1413
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v3

    move v4, p1

    move v5, p2

    move-object v6, p3

    move v7, p4

    move v8, p5

    invoke-interface/range {v3 .. v8}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->addDownloadListener(IILcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;IZ)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1419
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1420
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 1416
    :cond_2
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1419
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1420
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception p1

    .line 1419
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1420
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public addDownloadListener1(IILcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;IZZ)V
    .locals 11
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1425
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    .line 1426
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v2

    :try_start_0
    const-string v0, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 1428
    invoke-virtual {v1, v0}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    move v0, p1

    .line 1429
    invoke-virtual {v1, p1}, Landroid/os/Parcel;->writeInt(I)V

    move v5, p2

    .line 1430
    invoke-virtual {v1, p2}, Landroid/os/Parcel;->writeInt(I)V

    if-eqz p3, :cond_0

    .line 1431
    invoke-interface {p3}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;->asBinder()Landroid/os/IBinder;

    move-result-object v3

    goto :goto_0

    :cond_0
    const/4 v3, 0x0

    :goto_0
    invoke-virtual {v1, v3}, Landroid/os/Parcel;->writeStrongBinder(Landroid/os/IBinder;)V

    move v7, p4

    .line 1432
    invoke-virtual {v1, p4}, Landroid/os/Parcel;->writeInt(I)V

    const/4 v3, 0x1

    const/4 v4, 0x0

    if-eqz p5, :cond_1

    move v6, v3

    goto :goto_1

    :cond_1
    move v6, v4

    .line 1433
    :goto_1
    invoke-virtual {v1, v6}, Landroid/os/Parcel;->writeInt(I)V

    if-eqz p6, :cond_2

    goto :goto_2

    :cond_2
    move v3, v4

    .line 1434
    :goto_2
    invoke-virtual {v1, v3}, Landroid/os/Parcel;->writeInt(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    move-object v10, p0

    .line 1435
    :try_start_1
    iget-object v3, v10, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v6, 0x1b

    invoke-interface {v3, v6, v1, v2, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v3

    if-nez v3, :cond_3

    .line 1436
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v3

    if-eqz v3, :cond_3

    .line 1437
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v3

    move v4, p1

    move v5, p2

    move-object v6, p3

    move v7, p4

    move/from16 v8, p5

    move/from16 v9, p6

    invoke-interface/range {v3 .. v9}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->addDownloadListener1(IILcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;IZZ)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1443
    invoke-virtual {v2}, Landroid/os/Parcel;->recycle()V

    .line 1444
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 1440
    :cond_3
    :try_start_2
    invoke-virtual {v2}, Landroid/os/Parcel;->readException()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 1443
    invoke-virtual {v2}, Landroid/os/Parcel;->recycle()V

    .line 1444
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception v0

    goto :goto_3

    :catchall_1
    move-exception v0

    move-object v10, p0

    .line 1443
    :goto_3
    invoke-virtual {v2}, Landroid/os/Parcel;->recycle()V

    .line 1444
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    throw v0
.end method

.method public addProcessCallback(Lcom/ss/android/socialbase/downloader/depend/ProcessAidlCallback;)V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1893
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1894
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 1896
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    if-eqz p1, :cond_0

    .line 1897
    invoke-interface {p1}, Lcom/ss/android/socialbase/downloader/depend/ProcessAidlCallback;->asBinder()Landroid/os/IBinder;

    move-result-object v2

    goto :goto_0

    :cond_0
    const/4 v2, 0x0

    :goto_0
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeStrongBinder(Landroid/os/IBinder;)V

    .line 1898
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x31

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_1

    .line 1899
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 1900
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->addProcessCallback(Lcom/ss/android/socialbase/downloader/depend/ProcessAidlCallback;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1906
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1907
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 1903
    :cond_1
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1906
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1907
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception p1

    .line 1906
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1907
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public asBinder()Landroid/os/IBinder;
    .locals 1

    .line 876
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    return-object v0
.end method

.method public canResume(I)Z
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 942
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 943
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 946
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 947
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeInt(I)V

    .line 948
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/4 v3, 0x4

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 949
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 950
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->canResume(I)Z

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 956
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 957
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return p1

    .line 952
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 953
    invoke-virtual {v1}, Landroid/os/Parcel;->readInt()I

    move-result p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz p1, :cond_1

    const/4 v4, 0x1

    .line 956
    :cond_1
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 957
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return v4

    :catchall_0
    move-exception p1

    .line 956
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 957
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public cancel(IZ)V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 922
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 923
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 925
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 926
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeInt(I)V

    const/4 v2, 0x0

    if-eqz p2, :cond_0

    const/4 v3, 0x1

    goto :goto_0

    :cond_0
    move v3, v2

    .line 927
    :goto_0
    invoke-virtual {v0, v3}, Landroid/os/Parcel;->writeInt(I)V

    .line 928
    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/4 v4, 0x3

    invoke-interface {v3, v4, v0, v1, v2}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_1

    .line 929
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 930
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->cancel(IZ)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 936
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 937
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 933
    :cond_1
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 936
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 937
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception p1

    .line 936
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 937
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public clearData()V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1835
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1836
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 1838
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1839
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x2e

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1840
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1841
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->clearData()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1847
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1848
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 1844
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1847
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1848
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception v2

    .line 1847
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1848
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw v2
.end method

.method public clearDownloadData(IZ)V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1320
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1321
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 1323
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1324
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeInt(I)V

    const/4 v2, 0x0

    if-eqz p2, :cond_0

    const/4 v3, 0x1

    goto :goto_0

    :cond_0
    move v3, v2

    .line 1325
    :goto_0
    invoke-virtual {v0, v3}, Landroid/os/Parcel;->writeInt(I)V

    .line 1326
    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v4, 0x16

    invoke-interface {v3, v4, v0, v1, v2}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_1

    .line 1327
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 1328
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->clearDownloadData(IZ)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1334
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1335
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 1331
    :cond_1
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1334
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1335
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception p1

    .line 1334
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1335
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public dispatchProcessCallback(II)V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1912
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1913
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 1915
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1916
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeInt(I)V

    .line 1917
    invoke-virtual {v0, p2}, Landroid/os/Parcel;->writeInt(I)V

    .line 1918
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x32

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1919
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1920
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->dispatchProcessCallback(II)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1926
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1927
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 1923
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1926
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1927
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception p1

    .line 1926
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1927
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public forceDownloadIngoreRecommendSize(I)V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1360
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1361
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 1363
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1364
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeInt(I)V

    .line 1365
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x18

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1366
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1367
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->forceDownloadIngoreRecommendSize(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1373
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1374
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 1370
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1373
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1374
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception p1

    .line 1373
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1374
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public getAllDownloadInfo()Ljava/util/List;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            ">;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1262
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1263
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 1266
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1267
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x13

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1268
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1269
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->getAllDownloadInfo()Ljava/util/List;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1275
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1276
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    .line 1271
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 1272
    sget-object v2, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-virtual {v1, v2}, Landroid/os/Parcel;->createTypedArrayList(Landroid/os/Parcelable$Creator;)Ljava/util/ArrayList;

    move-result-object v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1275
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1276
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    :catchall_0
    move-exception v2

    .line 1275
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1276
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw v2
.end method

.method public getCurBytes(I)J
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1019
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1020
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 1023
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1024
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeInt(I)V

    .line 1025
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x8

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1026
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1027
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->getCurBytes(I)J

    move-result-wide v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1033
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1034
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-wide v2

    .line 1029
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 1030
    invoke-virtual {v1}, Landroid/os/Parcel;->readLong()J

    move-result-wide v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1033
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1034
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-wide v2

    :catchall_0
    move-exception p1

    .line 1033
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1034
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public getDownloadChunk(I)Ljava/util/List;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadChunk;",
            ">;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1129
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1130
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 1133
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1134
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeInt(I)V

    .line 1135
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0xd

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1136
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1137
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->getDownloadChunk(I)Ljava/util/List;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1143
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1144
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    .line 1139
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 1140
    sget-object p1, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-virtual {v1, p1}, Landroid/os/Parcel;->createTypedArrayList(Landroid/os/Parcelable$Creator;)Ljava/util/ArrayList;

    move-result-object p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1143
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1144
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    :catchall_0
    move-exception p1

    .line 1143
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1144
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public getDownloadFileUriProvider(I)Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlFileProvider;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1994
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1995
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 1998
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1999
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeInt(I)V

    .line 2000
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x36

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 2001
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 2002
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->getDownloadFileUriProvider(I)Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlFileProvider;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2008
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 2009
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    .line 2004
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 2005
    invoke-virtual {v1}, Landroid/os/Parcel;->readStrongBinder()Landroid/os/IBinder;

    move-result-object p1

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlFileProvider$Stub;->asInterface(Landroid/os/IBinder;)Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlFileProvider;

    move-result-object p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 2008
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 2009
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    :catchall_0
    move-exception p1

    .line 2008
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 2009
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public getDownloadId(Ljava/lang/String;Ljava/lang/String;)I
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1150
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1151
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 1154
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1155
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 1156
    invoke-virtual {v0, p2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 1157
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0xe

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1158
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1159
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->getDownloadId(Ljava/lang/String;Ljava/lang/String;)I

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1165
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1166
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return p1

    .line 1161
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 1162
    invoke-virtual {v1}, Landroid/os/Parcel;->readInt()I

    move-result p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1165
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1166
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return p1

    :catchall_0
    move-exception p1

    .line 1165
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1166
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1082
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1083
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 1086
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1087
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeInt(I)V

    .line 1088
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0xb

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1089
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1090
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1101
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1102
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    .line 1092
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 1093
    invoke-virtual {v1}, Landroid/os/Parcel;->readInt()I

    move-result p1

    if-eqz p1, :cond_1

    .line 1094
    sget-object p1, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {p1, v1}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :cond_1
    const/4 p1, 0x0

    .line 1101
    :goto_0
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1102
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    :catchall_0
    move-exception p1

    .line 1101
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1102
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public getDownloadInfoByUrlAndPath(Ljava/lang/String;Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
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
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 1176
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1177
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 1178
    invoke-virtual {v0, p2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 1179
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0xf

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1180
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1181
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->getDownloadInfoByUrlAndPath(Ljava/lang/String;Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1192
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1193
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    .line 1183
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 1184
    invoke-virtual {v1}, Landroid/os/Parcel;->readInt()I

    move-result p1

    if-eqz p1, :cond_1

    .line 1185
    sget-object p1, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {p1, v1}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :cond_1
    const/4 p1, 0x0

    .line 1192
    :goto_0
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1193
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    :catchall_0
    move-exception p1

    .line 1192
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1193
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public getDownloadInfoList(Ljava/lang/String;)Ljava/util/List;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            ">;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1108
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1109
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 1112
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1113
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 1114
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0xc

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1115
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1116
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->getDownloadInfoList(Ljava/lang/String;)Ljava/util/List;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1122
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1123
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    .line 1118
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 1119
    sget-object p1, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-virtual {v1, p1}, Landroid/os/Parcel;->createTypedArrayList(Landroid/os/Parcelable$Creator;)Ljava/util/ArrayList;

    move-result-object p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1122
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1123
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    :catchall_0
    move-exception p1

    .line 1122
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1123
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public getDownloadNotificationEventListener(I)Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1932
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1933
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 1936
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1937
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeInt(I)V

    .line 1938
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x33

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1939
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1940
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->getDownloadNotificationEventListener(I)Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1946
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1947
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    .line 1942
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 1943
    invoke-virtual {v1}, Landroid/os/Parcel;->readStrongBinder()Landroid/os/IBinder;

    move-result-object p1

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener$Stub;->asInterface(Landroid/os/IBinder;)Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener;

    move-result-object p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1946
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1947
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    :catchall_0
    move-exception p1

    .line 1946
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1947
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public getDownloadWithIndependentProcessStatus(I)I
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1636
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1637
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 1640
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1641
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeInt(I)V

    .line 1642
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x25

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1643
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1644
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->getDownloadWithIndependentProcessStatus(I)I

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1650
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1651
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return p1

    .line 1646
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 1647
    invoke-virtual {v1}, Landroid/os/Parcel;->readInt()I

    move-result p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1650
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1651
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return p1

    :catchall_0
    move-exception p1

    .line 1650
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1651
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public getDownloadingDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            ">;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1241
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1242
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 1245
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1246
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 1247
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x12

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1248
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1249
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->getDownloadingDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1255
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1256
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    .line 1251
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 1252
    sget-object p1, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-virtual {v1, p1}, Landroid/os/Parcel;->createTypedArrayList(Landroid/os/Parcelable$Creator;)Ljava/util/ArrayList;

    move-result-object p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1255
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1256
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    :catchall_0
    move-exception p1

    .line 1255
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1256
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public getFailedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            ">;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1199
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1200
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 1203
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1204
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 1205
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x10

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1206
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1207
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->getFailedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1213
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1214
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    .line 1209
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 1210
    sget-object p1, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-virtual {v1, p1}, Landroid/os/Parcel;->createTypedArrayList(Landroid/os/Parcelable$Creator;)Ljava/util/ArrayList;

    move-result-object p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1213
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1214
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    :catchall_0
    move-exception p1

    .line 1213
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1214
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public getInterfaceDescriptor()Ljava/lang/String;
    .locals 1

    const-string v0, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    return-object v0
.end method

.method public getNotificationClickCallback(I)Lcom/ss/android/socialbase/downloader/depend/INotificationClickAidlCallback;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1953
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1954
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 1957
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1958
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeInt(I)V

    .line 1959
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x34

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1960
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1961
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->getNotificationClickCallback(I)Lcom/ss/android/socialbase/downloader/depend/INotificationClickAidlCallback;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1967
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1968
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    .line 1963
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 1964
    invoke-virtual {v1}, Landroid/os/Parcel;->readStrongBinder()Landroid/os/IBinder;

    move-result-object p1

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/depend/INotificationClickAidlCallback$Stub;->asInterface(Landroid/os/IBinder;)Lcom/ss/android/socialbase/downloader/depend/INotificationClickAidlCallback;

    move-result-object p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1967
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1968
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    :catchall_0
    move-exception p1

    .line 1967
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1968
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public getStatus(I)I
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1040
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1041
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 1044
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1045
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeInt(I)V

    .line 1046
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x9

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1047
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1048
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->getStatus(I)I

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1054
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1055
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return p1

    .line 1050
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 1051
    invoke-virtual {v1}, Landroid/os/Parcel;->readInt()I

    move-result p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1054
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1055
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return p1

    :catchall_0
    move-exception p1

    .line 1054
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1055
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public getSuccessedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            ">;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1220
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1221
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 1224
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1225
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 1226
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x11

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1227
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1228
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->getSuccessedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1234
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1235
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    .line 1230
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 1231
    sget-object p1, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-virtual {v1, p1}, Landroid/os/Parcel;->createTypedArrayList(Landroid/os/Parcelable$Creator;)Ljava/util/ArrayList;

    move-result-object p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1234
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1235
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    :catchall_0
    move-exception p1

    .line 1234
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1235
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public getUnCompletedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            ">;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1535
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1536
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 1539
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1540
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 1541
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x20

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1542
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1543
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->getUnCompletedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1549
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1550
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    .line 1545
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 1546
    sget-object p1, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-virtual {v1, p1}, Landroid/os/Parcel;->createTypedArrayList(Landroid/os/Parcelable$Creator;)Ljava/util/ArrayList;

    move-result-object p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1549
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1550
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    :catchall_0
    move-exception p1

    .line 1549
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1550
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public isDownloadCacheSyncSuccess()Z
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1596
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1597
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 1600
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1601
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x23

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1602
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1603
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->isDownloadCacheSyncSuccess()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1609
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1610
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return v2

    .line 1605
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 1606
    invoke-virtual {v1}, Landroid/os/Parcel;->readInt()I

    move-result v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz v2, :cond_1

    const/4 v4, 0x1

    .line 1609
    :cond_1
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1610
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return v4

    :catchall_0
    move-exception v2

    .line 1609
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1610
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw v2
.end method

.method public isDownloadSuccessAndFileNotExist(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z
    .locals 6
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1449
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1450
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 1453
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    const/4 v2, 0x1

    const/4 v3, 0x0

    if-eqz p1, :cond_0

    .line 1455
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInt(I)V

    .line 1456
    invoke-virtual {p1, v0, v3}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_0

    .line 1459
    :cond_0
    invoke-virtual {v0, v3}, Landroid/os/Parcel;->writeInt(I)V

    .line 1461
    :goto_0
    iget-object v4, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v5, 0x1c

    invoke-interface {v4, v5, v0, v1, v3}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v4

    if-nez v4, :cond_1

    .line 1462
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v4

    if-eqz v4, :cond_1

    .line 1463
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->isDownloadSuccessAndFileNotExist(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1469
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1470
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return p1

    .line 1465
    :cond_1
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 1466
    invoke-virtual {v1}, Landroid/os/Parcel;->readInt()I

    move-result p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz p1, :cond_2

    goto :goto_1

    :cond_2
    move v2, v3

    .line 1469
    :goto_1
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1470
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return v2

    :catchall_0
    move-exception p1

    .line 1469
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1470
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public isDownloading(I)Z
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1061
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1062
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 1065
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1066
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeInt(I)V

    .line 1067
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0xa

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1068
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1069
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->isDownloading(I)Z

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1075
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1076
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return p1

    .line 1071
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 1072
    invoke-virtual {v1}, Landroid/os/Parcel;->readInt()I

    move-result p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz p1, :cond_1

    const/4 v4, 0x1

    .line 1075
    :cond_1
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1076
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return v4

    :catchall_0
    move-exception p1

    .line 1075
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1076
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public isHttpServiceInit()Z
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1515
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1516
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 1519
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1520
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x1f

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1521
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1522
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->isHttpServiceInit()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1528
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1529
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return v2

    .line 1524
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 1525
    invoke-virtual {v1}, Landroid/os/Parcel;->readInt()I

    move-result v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz v2, :cond_1

    const/4 v4, 0x1

    .line 1528
    :cond_1
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1529
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return v4

    :catchall_0
    move-exception v2

    .line 1528
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1529
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw v2
.end method

.method public isServiceForeground()Z
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 2015
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 2016
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 2019
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 2020
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x37

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 2021
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 2022
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->isServiceForeground()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2028
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 2029
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return v2

    .line 2024
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 2025
    invoke-virtual {v1}, Landroid/os/Parcel;->readInt()I

    move-result v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz v2, :cond_1

    const/4 v4, 0x1

    .line 2028
    :cond_1
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 2029
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return v4

    :catchall_0
    move-exception v2

    .line 2028
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 2029
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw v2
.end method

.method public pause(I)V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 903
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 904
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 906
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 907
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeInt(I)V

    .line 908
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/4 v3, 0x2

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 909
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 910
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->pause(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 916
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 917
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 913
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 916
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 917
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception p1

    .line 916
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 917
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public pauseAll()V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1001
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1002
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 1004
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1005
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/4 v3, 0x7

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1006
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1007
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->pauseAll()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1013
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1014
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 1010
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1013
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1014
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception v2

    .line 1013
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1014
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw v2
.end method

.method public removeAllDownloadChunk(I)V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1730
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1731
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 1733
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1734
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeInt(I)V

    .line 1735
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x29

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1736
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1737
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->removeAllDownloadChunk(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1743
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1744
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 1740
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1743
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1744
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception p1

    .line 1743
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1744
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public removeDownloadInfo(I)Z
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1709
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1710
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 1713
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1714
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeInt(I)V

    .line 1715
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x28

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1716
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1717
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->removeDownloadInfo(I)Z

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1723
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1724
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return p1

    .line 1719
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 1720
    invoke-virtual {v1}, Landroid/os/Parcel;->readInt()I

    move-result p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz p1, :cond_1

    const/4 v4, 0x1

    .line 1723
    :cond_1
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1724
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return v4

    :catchall_0
    move-exception p1

    .line 1723
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1724
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public removeDownloadListener(IILcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;IZ)V
    .locals 9
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1379
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1380
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 1382
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1383
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeInt(I)V

    .line 1384
    invoke-virtual {v0, p2}, Landroid/os/Parcel;->writeInt(I)V

    if-eqz p3, :cond_0

    .line 1385
    invoke-interface {p3}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;->asBinder()Landroid/os/IBinder;

    move-result-object v2

    goto :goto_0

    :cond_0
    const/4 v2, 0x0

    :goto_0
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeStrongBinder(Landroid/os/IBinder;)V

    .line 1386
    invoke-virtual {v0, p4}, Landroid/os/Parcel;->writeInt(I)V

    const/4 v2, 0x0

    if-eqz p5, :cond_1

    const/4 v3, 0x1

    goto :goto_1

    :cond_1
    move v3, v2

    .line 1387
    :goto_1
    invoke-virtual {v0, v3}, Landroid/os/Parcel;->writeInt(I)V

    .line 1388
    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v4, 0x19

    invoke-interface {v3, v4, v0, v1, v2}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_2

    .line 1389
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_2

    .line 1390
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v3

    move v4, p1

    move v5, p2

    move-object v6, p3

    move v7, p4

    move v8, p5

    invoke-interface/range {v3 .. v8}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->removeDownloadListener(IILcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;IZ)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1396
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1397
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 1393
    :cond_2
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1396
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1397
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception p1

    .line 1396
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1397
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public removeDownloadTaskData(I)Z
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1814
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1815
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 1818
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1819
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeInt(I)V

    .line 1820
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x2d

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1821
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1822
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->removeDownloadTaskData(I)Z

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1828
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1829
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return p1

    .line 1824
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 1825
    invoke-virtual {v1}, Landroid/os/Parcel;->readInt()I

    move-result p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz p1, :cond_1

    const/4 v4, 0x1

    .line 1828
    :cond_1
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1829
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return v4

    :catchall_0
    move-exception p1

    .line 1828
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1829
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public resetDownloadData(IZ)V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1340
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1341
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 1343
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1344
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeInt(I)V

    const/4 v2, 0x0

    if-eqz p2, :cond_0

    const/4 v3, 0x1

    goto :goto_0

    :cond_0
    move v3, v2

    .line 1345
    :goto_0
    invoke-virtual {v0, v3}, Landroid/os/Parcel;->writeInt(I)V

    .line 1346
    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v4, 0x17

    invoke-interface {v3, v4, v0, v1, v2}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_1

    .line 1347
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 1348
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->resetDownloadData(IZ)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1354
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1355
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 1351
    :cond_1
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1354
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1355
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception p1

    .line 1354
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1355
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public restart(I)V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 982
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 983
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 985
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 986
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeInt(I)V

    .line 987
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/4 v3, 0x6

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 988
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 989
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->restart(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 995
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 996
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 992
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 995
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 996
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception p1

    .line 995
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 996
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public restartAllFailedDownloadTasks(Ljava/util/List;)V
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1282
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1283
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 1285
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1286
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeStringList(Ljava/util/List;)V

    .line 1287
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x14

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1288
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1289
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->restartAllFailedDownloadTasks(Ljava/util/List;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1295
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1296
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 1292
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1295
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1296
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception p1

    .line 1295
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1296
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public restartAllPauseReserveOnWifiDownloadTasks(Ljava/util/List;)V
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1301
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1302
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 1304
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1305
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeStringList(Ljava/util/List;)V

    .line 1306
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x15

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1307
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1308
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->restartAllPauseReserveOnWifiDownloadTasks(Ljava/util/List;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1314
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1315
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 1311
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1314
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1315
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception p1

    .line 1314
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1315
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public resume(I)V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 963
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 964
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 966
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 967
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeInt(I)V

    .line 968
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/4 v3, 0x5

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 969
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 970
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->resume(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 976
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 977
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 973
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 976
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 977
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception p1

    .line 976
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 977
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public retryDelayStart(I)Z
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1556
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1557
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 1560
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1561
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeInt(I)V

    .line 1562
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x21

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1563
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1564
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->retryDelayStart(I)Z

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1570
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1571
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return p1

    .line 1566
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 1567
    invoke-virtual {v1}, Landroid/os/Parcel;->readInt()I

    move-result p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz p1, :cond_1

    const/4 v4, 0x1

    .line 1570
    :cond_1
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1571
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return v4

    :catchall_0
    move-exception p1

    .line 1570
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1571
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public setDownloadNotificationEventListener(ILcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener;)V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1974
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1975
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 1977
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1978
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeInt(I)V

    if-eqz p2, :cond_0

    .line 1979
    invoke-interface {p2}, Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener;->asBinder()Landroid/os/IBinder;

    move-result-object v2

    goto :goto_0

    :cond_0
    const/4 v2, 0x0

    :goto_0
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeStrongBinder(Landroid/os/IBinder;)V

    .line 1980
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x35

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_1

    .line 1981
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 1982
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->setDownloadNotificationEventListener(ILcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1988
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1989
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 1985
    :cond_1
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1988
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1989
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception p1

    .line 1988
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1989
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public setDownloadWithIndependentProcessStatus(IZ)V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1616
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1617
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 1619
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1620
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeInt(I)V

    const/4 v2, 0x0

    if-eqz p2, :cond_0

    const/4 v3, 0x1

    goto :goto_0

    :cond_0
    move v3, v2

    .line 1621
    :goto_0
    invoke-virtual {v0, v3}, Landroid/os/Parcel;->writeInt(I)V

    .line 1622
    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v4, 0x24

    invoke-interface {v3, v4, v0, v1, v2}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_1

    .line 1623
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 1624
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->setDownloadWithIndependentProcessStatus(IZ)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1630
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1631
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 1627
    :cond_1
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1630
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1631
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception p1

    .line 1630
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1631
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public setLogLevel(I)V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1577
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1578
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 1580
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1581
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeInt(I)V

    .line 1582
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x22

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1583
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1584
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->setLogLevel(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1590
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1591
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 1587
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1590
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1591
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception p1

    .line 1590
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1591
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public setThrottleNetSpeed(IJ)V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 2035
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 2036
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 2038
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 2039
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeInt(I)V

    .line 2040
    invoke-virtual {v0, p2, p3}, Landroid/os/Parcel;->writeLong(J)V

    .line 2041
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x38

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 2042
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 2043
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2, p1, p2, p3}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->setThrottleNetSpeed(IJ)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2049
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 2050
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 2046
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 2049
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 2050
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception p1

    .line 2049
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 2050
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public startForeground(ILandroid/app/Notification;)V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1476
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    :try_start_0
    const-string v1, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 1478
    invoke-virtual {v0, v1}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1479
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeInt(I)V

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eqz p2, :cond_0

    .line 1481
    invoke-virtual {v0, v1}, Landroid/os/Parcel;->writeInt(I)V

    .line 1482
    invoke-virtual {p2, v0, v2}, Landroid/app/Notification;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_0

    .line 1485
    :cond_0
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInt(I)V

    .line 1487
    :goto_0
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x1d

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v4, v1}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v1

    if-nez v1, :cond_1

    .line 1488
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 1489
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v1

    invoke-interface {v1, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->startForeground(ILandroid/app/Notification;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1494
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

.method public stopForeground(Z)V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1499
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    :try_start_0
    const-string v1, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 1501
    invoke-virtual {v0, v1}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    const/4 v1, 0x1

    if-eqz p1, :cond_0

    move v2, v1

    goto :goto_0

    :cond_0
    const/4 v2, 0x0

    .line 1502
    :goto_0
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInt(I)V

    .line 1503
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x1e

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v4, v1}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v1

    if-nez v1, :cond_1

    .line 1504
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 1505
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v1

    invoke-interface {v1, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->stopForeground(Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1510
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

.method public syncDownloadChunks(ILjava/util/List;)V
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadChunk;",
            ">;)V"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1873
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1874
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 1876
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1877
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeInt(I)V

    .line 1878
    invoke-virtual {v0, p2}, Landroid/os/Parcel;->writeTypedList(Ljava/util/List;)V

    .line 1879
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x30

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1880
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1881
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->syncDownloadChunks(ILjava/util/List;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1887
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1888
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 1884
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1887
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1888
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception p1

    .line 1887
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1888
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public syncDownloadInfoFromOtherCache(ILjava/util/List;)V
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadChunk;",
            ">;)V"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1853
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1854
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 1856
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1857
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeInt(I)V

    .line 1858
    invoke-virtual {v0, p2}, Landroid/os/Parcel;->writeTypedList(Ljava/util/List;)V

    .line 1859
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x2f

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1860
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1861
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->syncDownloadInfoFromOtherCache(ILjava/util/List;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1867
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1868
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 1864
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1867
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1868
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception p1

    .line 1867
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1868
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public tryDownload(Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;)V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 884
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 885
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 887
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    if-eqz p1, :cond_0

    .line 888
    invoke-interface {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;->asBinder()Landroid/os/IBinder;

    move-result-object v2

    goto :goto_0

    :cond_0
    const/4 v2, 0x0

    :goto_0
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeStrongBinder(Landroid/os/IBinder;)V

    .line 889
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/4 v3, 0x1

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_1

    .line 890
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 891
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->tryDownload(Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 897
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 898
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 894
    :cond_1
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 897
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 898
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception p1

    .line 897
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 898
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public updateDownloadChunk(IIJ)V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1749
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1750
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 1752
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1753
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeInt(I)V

    .line 1754
    invoke-virtual {v0, p2}, Landroid/os/Parcel;->writeInt(I)V

    .line 1755
    invoke-virtual {v0, p3, p4}, Landroid/os/Parcel;->writeLong(J)V

    .line 1756
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x2a

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1757
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1758
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2, p1, p2, p3, p4}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->updateDownloadChunk(IIJ)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1764
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1765
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 1761
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1764
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1765
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception p1

    .line 1764
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1765
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public updateDownloadInfo(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z
    .locals 6
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1682
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1683
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 1686
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    const/4 v2, 0x1

    const/4 v3, 0x0

    if-eqz p1, :cond_0

    .line 1688
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInt(I)V

    .line 1689
    invoke-virtual {p1, v0, v3}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_0

    .line 1692
    :cond_0
    invoke-virtual {v0, v3}, Landroid/os/Parcel;->writeInt(I)V

    .line 1694
    :goto_0
    iget-object v4, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v5, 0x27

    invoke-interface {v4, v5, v0, v1, v3}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v4

    if-nez v4, :cond_1

    .line 1695
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v4

    if-eqz v4, :cond_1

    .line 1696
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->updateDownloadInfo(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1702
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1703
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return p1

    .line 1698
    :cond_1
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 1699
    invoke-virtual {v1}, Landroid/os/Parcel;->readInt()I

    move-result p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz p1, :cond_2

    goto :goto_1

    :cond_2
    move v2, v3

    .line 1702
    :goto_1
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1703
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return v2

    :catchall_0
    move-exception p1

    .line 1702
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1703
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public updateSubDownloadChunk(IIIJ)V
    .locals 9
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1770
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1771
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 1773
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1774
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeInt(I)V

    .line 1775
    invoke-virtual {v0, p2}, Landroid/os/Parcel;->writeInt(I)V

    .line 1776
    invoke-virtual {v0, p3}, Landroid/os/Parcel;->writeInt(I)V

    .line 1777
    invoke-virtual {v0, p4, p5}, Landroid/os/Parcel;->writeLong(J)V

    .line 1778
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x2b

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1779
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1780
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v3

    move v4, p1

    move v5, p2

    move v6, p3

    move-wide v7, p4

    invoke-interface/range {v3 .. v8}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->updateSubDownloadChunk(IIIJ)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1786
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1787
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 1783
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1786
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1787
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception p1

    .line 1786
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1787
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public updateSubDownloadChunkIndex(IIII)V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 1792
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 1793
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"

    .line 1795
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 1796
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeInt(I)V

    .line 1797
    invoke-virtual {v0, p2}, Landroid/os/Parcel;->writeInt(I)V

    .line 1798
    invoke-virtual {v0, p3}, Landroid/os/Parcel;->writeInt(I)V

    .line 1799
    invoke-virtual {v0, p4}, Landroid/os/Parcel;->writeInt(I)V

    .line 1800
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x2c

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1801
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1802
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;

    move-result-object v2

    invoke-interface {v2, p1, p2, p3, p4}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadAidlService;->updateSubDownloadChunkIndex(IIII)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1808
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1809
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 1805
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1808
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1809
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception p1

    .line 1808
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 1809
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method
