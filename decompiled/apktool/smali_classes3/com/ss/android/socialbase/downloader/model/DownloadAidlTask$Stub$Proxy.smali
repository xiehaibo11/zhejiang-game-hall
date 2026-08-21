.class Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub$Proxy;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "Proxy"
.end annotation


# static fields
.field public static sDefaultImpl:Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;


# instance fields
.field private mRemote:Landroid/os/IBinder;


# direct methods
.method constructor <init>(Landroid/os/IBinder;)V
    .locals 0

    .line 271
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 272
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    return-void
.end method


# virtual methods
.method public asBinder()Landroid/os/IBinder;
    .locals 1

    .line 276
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    return-object v0
.end method

.method public getChunkStrategy()Lcom/ss/android/socialbase/downloader/depend/IChunkCntAidlCalculator;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 309
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 310
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.model.DownloadAidlTask"

    .line 313
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 314
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/4 v3, 0x2

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 315
    invoke-static {}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 316
    invoke-static {}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;

    move-result-object v2

    invoke-interface {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;->getChunkStrategy()Lcom/ss/android/socialbase/downloader/depend/IChunkCntAidlCalculator;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 322
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 323
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    .line 318
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 319
    invoke-virtual {v1}, Landroid/os/Parcel;->readStrongBinder()Landroid/os/IBinder;

    move-result-object v2

    invoke-static {v2}, Lcom/ss/android/socialbase/downloader/depend/IChunkCntAidlCalculator$Stub;->asInterface(Landroid/os/IBinder;)Lcom/ss/android/socialbase/downloader/depend/IChunkCntAidlCalculator;

    move-result-object v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 322
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 323
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    :catchall_0
    move-exception v2

    .line 322
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 323
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw v2
.end method

.method public getDepend()Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlDepend;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 453
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 454
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.model.DownloadAidlTask"

    .line 457
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 458
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x9

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 459
    invoke-static {}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 460
    invoke-static {}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;

    move-result-object v2

    invoke-interface {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;->getDepend()Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlDepend;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 466
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 467
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    .line 462
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 463
    invoke-virtual {v1}, Landroid/os/Parcel;->readStrongBinder()Landroid/os/IBinder;

    move-result-object v2

    invoke-static {v2}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlDepend$Stub;->asInterface(Landroid/os/IBinder;)Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlDepend;

    move-result-object v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 466
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 467
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    :catchall_0
    move-exception v2

    .line 466
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 467
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw v2
.end method

.method public getDiskSpaceHandler()Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlHandler;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 513
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 514
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.model.DownloadAidlTask"

    .line 517
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 518
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0xc

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 519
    invoke-static {}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 520
    invoke-static {}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;

    move-result-object v2

    invoke-interface {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;->getDiskSpaceHandler()Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlHandler;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 526
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 527
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    .line 522
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 523
    invoke-virtual {v1}, Landroid/os/Parcel;->readStrongBinder()Landroid/os/IBinder;

    move-result-object v2

    invoke-static {v2}, Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlHandler$Stub;->asInterface(Landroid/os/IBinder;)Lcom/ss/android/socialbase/downloader/depend/IDownloadDiskSpaceAidlHandler;

    move-result-object v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 526
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 527
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    :catchall_0
    move-exception v2

    .line 526
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 527
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw v2
.end method

.method public getDownloadCompleteAidlHandlerByIndex(I)Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteAidlHandler;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 593
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 594
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.model.DownloadAidlTask"

    .line 597
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 598
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeInt(I)V

    .line 599
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x10

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 600
    invoke-static {}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 601
    invoke-static {}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;->getDownloadCompleteAidlHandlerByIndex(I)Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteAidlHandler;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 607
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 608
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    .line 603
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 604
    invoke-virtual {v1}, Landroid/os/Parcel;->readStrongBinder()Landroid/os/IBinder;

    move-result-object p1

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteAidlHandler$Stub;->asInterface(Landroid/os/IBinder;)Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteAidlHandler;

    move-result-object p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 607
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 608
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    :catchall_0
    move-exception p1

    .line 607
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 608
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public getDownloadCompleteHandlerSize()I
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 573
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 574
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.model.DownloadAidlTask"

    .line 577
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 578
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0xf

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 579
    invoke-static {}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 580
    invoke-static {}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;

    move-result-object v2

    invoke-interface {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;->getDownloadCompleteHandlerSize()I

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 586
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 587
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return v2

    .line 582
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 583
    invoke-virtual {v1}, Landroid/os/Parcel;->readInt()I

    move-result v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 586
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 587
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return v2

    :catchall_0
    move-exception v2

    .line 586
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 587
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw v2
.end method

.method public getDownloadInfo()Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 284
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 285
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.model.DownloadAidlTask"

    .line 288
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 289
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/4 v3, 0x1

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 290
    invoke-static {}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 291
    invoke-static {}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;

    move-result-object v2

    invoke-interface {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;->getDownloadInfo()Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 302
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 303
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    .line 293
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 294
    invoke-virtual {v1}, Landroid/os/Parcel;->readInt()I

    move-result v2

    if-eqz v2, :cond_1

    .line 295
    sget-object v2, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {v2, v1}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :cond_1
    const/4 v2, 0x0

    .line 302
    :goto_0
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 303
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    :catchall_0
    move-exception v2

    .line 302
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 303
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw v2
.end method

.method public getDownloadListenerByIndex(II)Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 350
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 351
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.model.DownloadAidlTask"

    .line 354
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 355
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeInt(I)V

    .line 356
    invoke-virtual {v0, p2}, Landroid/os/Parcel;->writeInt(I)V

    .line 357
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/4 v3, 0x4

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 358
    invoke-static {}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 359
    invoke-static {}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;

    move-result-object v2

    invoke-interface {v2, p1, p2}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;->getDownloadListenerByIndex(II)Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 365
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 366
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    .line 361
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 362
    invoke-virtual {v1}, Landroid/os/Parcel;->readStrongBinder()Landroid/os/IBinder;

    move-result-object p1

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener$Stub;->asInterface(Landroid/os/IBinder;)Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;

    move-result-object p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 365
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 366
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    :catchall_0
    move-exception p1

    .line 365
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 366
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public getDownloadListenerSize(I)I
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 329
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 330
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.model.DownloadAidlTask"

    .line 333
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 334
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeInt(I)V

    .line 335
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/4 v3, 0x3

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 336
    invoke-static {}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 337
    invoke-static {}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;->getDownloadListenerSize(I)I

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 343
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 344
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return p1

    .line 339
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 340
    invoke-virtual {v1}, Landroid/os/Parcel;->readInt()I

    move-result p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 343
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 344
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return p1

    :catchall_0
    move-exception p1

    .line 343
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 344
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public getDownloadNotificationEventListener()Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 393
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 394
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.model.DownloadAidlTask"

    .line 397
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 398
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/4 v3, 0x6

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 399
    invoke-static {}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 400
    invoke-static {}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;

    move-result-object v2

    invoke-interface {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;->getDownloadNotificationEventListener()Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 406
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 407
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    .line 402
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 403
    invoke-virtual {v1}, Landroid/os/Parcel;->readStrongBinder()Landroid/os/IBinder;

    move-result-object v2

    invoke-static {v2}, Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener$Stub;->asInterface(Landroid/os/IBinder;)Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventAidlListener;

    move-result-object v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 406
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 407
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    :catchall_0
    move-exception v2

    .line 406
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 407
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw v2
.end method

.method public getFileProvider()Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlFileProvider;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 553
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 554
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.model.DownloadAidlTask"

    .line 557
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 558
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0xe

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 559
    invoke-static {}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 560
    invoke-static {}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;

    move-result-object v2

    invoke-interface {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;->getFileProvider()Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlFileProvider;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 566
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 567
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    .line 562
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 563
    invoke-virtual {v1}, Landroid/os/Parcel;->readStrongBinder()Landroid/os/IBinder;

    move-result-object v2

    invoke-static {v2}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlFileProvider$Stub;->asInterface(Landroid/os/IBinder;)Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlFileProvider;

    move-result-object v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 566
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 567
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    :catchall_0
    move-exception v2

    .line 566
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 567
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw v2
.end method

.method public getForbiddenHandler()Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenAidlHandler;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 473
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 474
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.model.DownloadAidlTask"

    .line 477
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 478
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0xa

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 479
    invoke-static {}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 480
    invoke-static {}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;

    move-result-object v2

    invoke-interface {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;->getForbiddenHandler()Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenAidlHandler;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 486
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 487
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    .line 482
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 483
    invoke-virtual {v1}, Landroid/os/Parcel;->readStrongBinder()Landroid/os/IBinder;

    move-result-object v2

    invoke-static {v2}, Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenAidlHandler$Stub;->asInterface(Landroid/os/IBinder;)Lcom/ss/android/socialbase/downloader/depend/IDownloadForbiddenAidlHandler;

    move-result-object v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 486
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 487
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    :catchall_0
    move-exception v2

    .line 486
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 487
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw v2
.end method

.method public getInterceptor()Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlInterceptor;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 433
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 434
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.model.DownloadAidlTask"

    .line 437
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 438
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x8

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 439
    invoke-static {}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 440
    invoke-static {}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;

    move-result-object v2

    invoke-interface {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;->getInterceptor()Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlInterceptor;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 446
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 447
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    .line 442
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 443
    invoke-virtual {v1}, Landroid/os/Parcel;->readStrongBinder()Landroid/os/IBinder;

    move-result-object v2

    invoke-static {v2}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlInterceptor$Stub;->asInterface(Landroid/os/IBinder;)Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlInterceptor;

    move-result-object v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 446
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 447
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    :catchall_0
    move-exception v2

    .line 446
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 447
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw v2
.end method

.method public getInterfaceDescriptor()Ljava/lang/String;
    .locals 1

    const-string v0, "com.ss.android.socialbase.downloader.model.DownloadAidlTask"

    return-object v0
.end method

.method public getMonitorDepend()Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlMonitorDepend;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 533
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 534
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.model.DownloadAidlTask"

    .line 537
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 538
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0xd

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 539
    invoke-static {}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 540
    invoke-static {}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;

    move-result-object v2

    invoke-interface {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;->getMonitorDepend()Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlMonitorDepend;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 546
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 547
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    .line 542
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 543
    invoke-virtual {v1}, Landroid/os/Parcel;->readStrongBinder()Landroid/os/IBinder;

    move-result-object v2

    invoke-static {v2}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlMonitorDepend$Stub;->asInterface(Landroid/os/IBinder;)Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlMonitorDepend;

    move-result-object v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 546
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 547
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    :catchall_0
    move-exception v2

    .line 546
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 547
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw v2
.end method

.method public getNotificationClickCallback()Lcom/ss/android/socialbase/downloader/depend/INotificationClickAidlCallback;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 413
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 414
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.model.DownloadAidlTask"

    .line 417
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 418
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/4 v3, 0x7

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 419
    invoke-static {}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 420
    invoke-static {}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;

    move-result-object v2

    invoke-interface {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;->getNotificationClickCallback()Lcom/ss/android/socialbase/downloader/depend/INotificationClickAidlCallback;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 426
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 427
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    .line 422
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 423
    invoke-virtual {v1}, Landroid/os/Parcel;->readStrongBinder()Landroid/os/IBinder;

    move-result-object v2

    invoke-static {v2}, Lcom/ss/android/socialbase/downloader/depend/INotificationClickAidlCallback$Stub;->asInterface(Landroid/os/IBinder;)Lcom/ss/android/socialbase/downloader/depend/INotificationClickAidlCallback;

    move-result-object v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 426
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 427
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    :catchall_0
    move-exception v2

    .line 426
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 427
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw v2
.end method

.method public getRetryDelayTimeCalculator()Lcom/ss/android/socialbase/downloader/depend/IRetryDelayTimeAidlCalculator;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 493
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 494
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.model.DownloadAidlTask"

    .line 497
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 498
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0xb

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 499
    invoke-static {}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 500
    invoke-static {}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;

    move-result-object v2

    invoke-interface {v2}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;->getRetryDelayTimeCalculator()Lcom/ss/android/socialbase/downloader/depend/IRetryDelayTimeAidlCalculator;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 506
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 507
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    .line 502
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 503
    invoke-virtual {v1}, Landroid/os/Parcel;->readStrongBinder()Landroid/os/IBinder;

    move-result-object v2

    invoke-static {v2}, Lcom/ss/android/socialbase/downloader/depend/IRetryDelayTimeAidlCalculator$Stub;->asInterface(Landroid/os/IBinder;)Lcom/ss/android/socialbase/downloader/depend/IRetryDelayTimeAidlCalculator;

    move-result-object v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 506
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 507
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    :catchall_0
    move-exception v2

    .line 506
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 507
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw v2
.end method

.method public getSingleDownloadListener(I)Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 372
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 373
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.ss.android.socialbase.downloader.model.DownloadAidlTask"

    .line 376
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 377
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeInt(I)V

    .line 378
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/4 v3, 0x5

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 379
    invoke-static {}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 380
    invoke-static {}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask$Stub;->getDefaultImpl()Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadAidlTask;->getSingleDownloadListener(I)Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 386
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 387
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    .line 382
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 383
    invoke-virtual {v1}, Landroid/os/Parcel;->readStrongBinder()Landroid/os/IBinder;

    move-result-object p1

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener$Stub;->asInterface(Landroid/os/IBinder;)Lcom/ss/android/socialbase/downloader/depend/IDownloadAidlListener;

    move-result-object p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 386
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 387
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    :catchall_0
    move-exception p1

    .line 386
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 387
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method
