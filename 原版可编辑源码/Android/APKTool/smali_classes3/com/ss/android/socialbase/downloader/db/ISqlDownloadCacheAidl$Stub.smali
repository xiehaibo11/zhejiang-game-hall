.class public abstract Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl$Stub;
.super Landroid/os/Binder;

# interfaces
.implements Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x409
    name = "Stub"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl$Stub$Proxy;
    }
.end annotation


# static fields
.field private static final DESCRIPTOR:Ljava/lang/String; = "com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl"

.field static final TRANSACTION_OnDownloadTaskCancel:I = 0x1c

.field static final TRANSACTION_OnDownloadTaskCompleted:I = 0x1a

.field static final TRANSACTION_OnDownloadTaskConnected:I = 0x16

.field static final TRANSACTION_OnDownloadTaskError:I = 0x18

.field static final TRANSACTION_OnDownloadTaskIntercept:I = 0x1e

.field static final TRANSACTION_OnDownloadTaskPause:I = 0x1b

.field static final TRANSACTION_OnDownloadTaskPrepare:I = 0x1d

.field static final TRANSACTION_OnDownloadTaskProgress:I = 0x17

.field static final TRANSACTION_OnDownloadTaskRetry:I = 0x19

.field static final TRANSACTION_addDownloadChunk:I = 0xb

.field static final TRANSACTION_addSubDownloadChunk:I = 0xc

.field static final TRANSACTION_cacheExist:I = 0x2

.field static final TRANSACTION_clearData:I = 0x14

.field static final TRANSACTION_ensureDownloadCacheSyncSuccess:I = 0x20

.field static final TRANSACTION_getAllDownloadInfo:I = 0x8

.field static final TRANSACTION_getDownloadChunk:I = 0x9

.field static final TRANSACTION_getDownloadInfo:I = 0x3

.field static final TRANSACTION_getDownloadInfoList:I = 0x4

.field static final TRANSACTION_getFailedDownloadInfosWithMimeType:I = 0x5

.field static final TRANSACTION_getSuccessedDownloadInfosWithMimeType:I = 0x6

.field static final TRANSACTION_getUnCompletedDownloadInfosWithMimeType:I = 0x7

.field static final TRANSACTION_init:I = 0x1

.field static final TRANSACTION_isDownloadCacheSyncSuccess:I = 0x1f

.field static final TRANSACTION_onDownloadTaskStart:I = 0x15

.field static final TRANSACTION_removeAllDownloadChunk:I = 0xa

.field static final TRANSACTION_removeDownloadInfo:I = 0x12

.field static final TRANSACTION_removeDownloadTaskData:I = 0x13

.field static final TRANSACTION_setInitCallback:I = 0x24

.field static final TRANSACTION_syncDownloadChunks:I = 0x22

.field static final TRANSACTION_syncDownloadInfo:I = 0x21

.field static final TRANSACTION_syncDownloadInfoFromOtherCache:I = 0x23

.field static final TRANSACTION_updateChunkCount:I = 0x10

.field static final TRANSACTION_updateDownloadChunk:I = 0xd

.field static final TRANSACTION_updateDownloadInfo:I = 0x11

.field static final TRANSACTION_updateSubDownloadChunk:I = 0xe

.field static final TRANSACTION_updateSubDownloadChunkIndex:I = 0xf


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 153
    invoke-direct {p0}, Landroid/os/Binder;-><init>()V

    const-string v0, "com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl"

    .line 154
    invoke-virtual {p0, p0, v0}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl$Stub;->attachInterface(Landroid/os/IInterface;Ljava/lang/String;)V

    return-void
.end method

.method public static asInterface(Landroid/os/IBinder;)Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;
    .locals 2

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    :cond_0
    const-string v0, "com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl"

    .line 165
    invoke-interface {p0, v0}, Landroid/os/IBinder;->queryLocalInterface(Ljava/lang/String;)Landroid/os/IInterface;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 166
    instance-of v1, v0, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    if-eqz v1, :cond_1

    .line 167
    check-cast v0, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    return-object v0

    .line 169
    :cond_1
    new-instance v0, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl$Stub$Proxy;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl$Stub$Proxy;-><init>(Landroid/os/IBinder;)V

    return-object v0
.end method

.method public static getDefaultImpl()Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;
    .locals 1

    .line 1550
    sget-object v0, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl$Stub$Proxy;->sDefaultImpl:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    return-object v0
.end method

.method public static setDefaultImpl(Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;)Z
    .locals 1

    .line 1543
    sget-object v0, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl$Stub$Proxy;->sDefaultImpl:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    if-nez v0, :cond_0

    if-eqz p0, :cond_0

    .line 1544
    sput-object p0, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl$Stub$Proxy;->sDefaultImpl:Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl;

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method


# virtual methods
.method public asBinder()Landroid/os/IBinder;
    .locals 0

    return-object p0
.end method

.method public onTransact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z
    .locals 10
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    const v0, 0x5f4e5446

    const/4 v1, 0x1

    const-string v2, "com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl"

    if-eq p1, v0, :cond_10

    const/4 v0, 0x0

    const/4 v3, 0x0

    packed-switch p1, :pswitch_data_0

    .line 655
    invoke-super {p0, p1, p2, p3, p4}, Landroid/os/Binder;->onTransact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result p1

    return p1

    .line 646
    :pswitch_0
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 648
    invoke-virtual {p2}, Landroid/os/Parcel;->readStrongBinder()Landroid/os/IBinder;

    move-result-object p1

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/db/ISqlCacheLoadCompleteCallbackAidl$Stub;->asInterface(Landroid/os/IBinder;)Lcom/ss/android/socialbase/downloader/db/ISqlCacheLoadCompleteCallbackAidl;

    move-result-object p1

    .line 649
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl$Stub;->setInitCallback(Lcom/ss/android/socialbase/downloader/db/ISqlCacheLoadCompleteCallbackAidl;)V

    .line 650
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v1

    .line 635
    :pswitch_1
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 637
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    .line 639
    sget-object p4, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-virtual {p2, p4}, Landroid/os/Parcel;->createTypedArrayList(Landroid/os/Parcelable$Creator;)Ljava/util/ArrayList;

    move-result-object p2

    .line 640
    invoke-virtual {p0, p1, p2}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl$Stub;->syncDownloadInfoFromOtherCache(ILjava/util/List;)V

    .line 641
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v1

    .line 624
    :pswitch_2
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 626
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    .line 628
    sget-object p4, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-virtual {p2, p4}, Landroid/os/Parcel;->createTypedArrayList(Landroid/os/Parcelable$Creator;)Ljava/util/ArrayList;

    move-result-object p2

    .line 629
    invoke-virtual {p0, p1, p2}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl$Stub;->syncDownloadChunks(ILjava/util/List;)V

    .line 630
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v1

    .line 610
    :pswitch_3
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 612
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    if-eqz p1, :cond_0

    .line 613
    sget-object p1, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {p1, p2}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p1

    move-object v0, p1

    check-cast v0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    .line 618
    :cond_0
    invoke-virtual {p0, v0}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl$Stub;->syncDownloadInfo(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    .line 619
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v1

    .line 602
    :pswitch_4
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 603
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl$Stub;->ensureDownloadCacheSyncSuccess()Z

    move-result p1

    .line 604
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 605
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeInt(I)V

    return v1

    .line 594
    :pswitch_5
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 595
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl$Stub;->isDownloadCacheSyncSuccess()Z

    move-result p1

    .line 596
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 597
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeInt(I)V

    return v1

    .line 578
    :pswitch_6
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 580
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    .line 581
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl$Stub;->OnDownloadTaskIntercept(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1

    .line 582
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    if-eqz p1, :cond_1

    .line 584
    invoke-virtual {p3, v1}, Landroid/os/Parcel;->writeInt(I)V

    .line 585
    invoke-virtual {p1, p3, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_0

    .line 588
    :cond_1
    invoke-virtual {p3, v3}, Landroid/os/Parcel;->writeInt(I)V

    :goto_0
    return v1

    .line 562
    :pswitch_7
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 564
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    .line 565
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl$Stub;->OnDownloadTaskPrepare(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1

    .line 566
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    if-eqz p1, :cond_2

    .line 568
    invoke-virtual {p3, v1}, Landroid/os/Parcel;->writeInt(I)V

    .line 569
    invoke-virtual {p1, p3, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_1

    .line 572
    :cond_2
    invoke-virtual {p3, v3}, Landroid/os/Parcel;->writeInt(I)V

    :goto_1
    return v1

    .line 544
    :pswitch_8
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 546
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    .line 548
    invoke-virtual {p2}, Landroid/os/Parcel;->readLong()J

    move-result-wide v4

    .line 549
    invoke-virtual {p0, p1, v4, v5}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl$Stub;->OnDownloadTaskCancel(IJ)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1

    .line 550
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    if-eqz p1, :cond_3

    .line 552
    invoke-virtual {p3, v1}, Landroid/os/Parcel;->writeInt(I)V

    .line 553
    invoke-virtual {p1, p3, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_2

    .line 556
    :cond_3
    invoke-virtual {p3, v3}, Landroid/os/Parcel;->writeInt(I)V

    :goto_2
    return v1

    .line 526
    :pswitch_9
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 528
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    .line 530
    invoke-virtual {p2}, Landroid/os/Parcel;->readLong()J

    move-result-wide v4

    .line 531
    invoke-virtual {p0, p1, v4, v5}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl$Stub;->OnDownloadTaskPause(IJ)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1

    .line 532
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    if-eqz p1, :cond_4

    .line 534
    invoke-virtual {p3, v1}, Landroid/os/Parcel;->writeInt(I)V

    .line 535
    invoke-virtual {p1, p3, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_3

    .line 538
    :cond_4
    invoke-virtual {p3, v3}, Landroid/os/Parcel;->writeInt(I)V

    :goto_3
    return v1

    .line 508
    :pswitch_a
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 510
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    .line 512
    invoke-virtual {p2}, Landroid/os/Parcel;->readLong()J

    move-result-wide v4

    .line 513
    invoke-virtual {p0, p1, v4, v5}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl$Stub;->OnDownloadTaskCompleted(IJ)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1

    .line 514
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    if-eqz p1, :cond_5

    .line 516
    invoke-virtual {p3, v1}, Landroid/os/Parcel;->writeInt(I)V

    .line 517
    invoke-virtual {p1, p3, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_4

    .line 520
    :cond_5
    invoke-virtual {p3, v3}, Landroid/os/Parcel;->writeInt(I)V

    :goto_4
    return v1

    .line 492
    :pswitch_b
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 494
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    .line 495
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl$Stub;->OnDownloadTaskRetry(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1

    .line 496
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    if-eqz p1, :cond_6

    .line 498
    invoke-virtual {p3, v1}, Landroid/os/Parcel;->writeInt(I)V

    .line 499
    invoke-virtual {p1, p3, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_5

    .line 502
    :cond_6
    invoke-virtual {p3, v3}, Landroid/os/Parcel;->writeInt(I)V

    :goto_5
    return v1

    .line 474
    :pswitch_c
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 476
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    .line 478
    invoke-virtual {p2}, Landroid/os/Parcel;->readLong()J

    move-result-wide v4

    .line 479
    invoke-virtual {p0, p1, v4, v5}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl$Stub;->OnDownloadTaskError(IJ)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1

    .line 480
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    if-eqz p1, :cond_7

    .line 482
    invoke-virtual {p3, v1}, Landroid/os/Parcel;->writeInt(I)V

    .line 483
    invoke-virtual {p1, p3, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_6

    .line 486
    :cond_7
    invoke-virtual {p3, v3}, Landroid/os/Parcel;->writeInt(I)V

    :goto_6
    return v1

    .line 456
    :pswitch_d
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 458
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    .line 460
    invoke-virtual {p2}, Landroid/os/Parcel;->readLong()J

    move-result-wide v4

    .line 461
    invoke-virtual {p0, p1, v4, v5}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl$Stub;->OnDownloadTaskProgress(IJ)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1

    .line 462
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    if-eqz p1, :cond_8

    .line 464
    invoke-virtual {p3, v1}, Landroid/os/Parcel;->writeInt(I)V

    .line 465
    invoke-virtual {p1, p3, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_7

    .line 468
    :cond_8
    invoke-virtual {p3, v3}, Landroid/os/Parcel;->writeInt(I)V

    :goto_7
    return v1

    .line 434
    :pswitch_e
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 436
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result v5

    .line 438
    invoke-virtual {p2}, Landroid/os/Parcel;->readLong()J

    move-result-wide v6

    .line 440
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v8

    .line 442
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v9

    move-object v4, p0

    .line 443
    invoke-virtual/range {v4 .. v9}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl$Stub;->OnDownloadTaskConnected(IJLjava/lang/String;Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1

    .line 444
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    if-eqz p1, :cond_9

    .line 446
    invoke-virtual {p3, v1}, Landroid/os/Parcel;->writeInt(I)V

    .line 447
    invoke-virtual {p1, p3, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_8

    .line 450
    :cond_9
    invoke-virtual {p3, v3}, Landroid/os/Parcel;->writeInt(I)V

    :goto_8
    return v1

    .line 418
    :pswitch_f
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 420
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    .line 421
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl$Stub;->onDownloadTaskStart(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1

    .line 422
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    if-eqz p1, :cond_a

    .line 424
    invoke-virtual {p3, v1}, Landroid/os/Parcel;->writeInt(I)V

    .line 425
    invoke-virtual {p1, p3, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_9

    .line 428
    :cond_a
    invoke-virtual {p3, v3}, Landroid/os/Parcel;->writeInt(I)V

    :goto_9
    return v1

    .line 411
    :pswitch_10
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 412
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl$Stub;->clearData()V

    .line 413
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v1

    .line 401
    :pswitch_11
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 403
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    .line 404
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl$Stub;->removeDownloadTaskData(I)Z

    move-result p1

    .line 405
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 406
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeInt(I)V

    return v1

    .line 391
    :pswitch_12
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 393
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    .line 394
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl$Stub;->removeDownloadInfo(I)Z

    move-result p1

    .line 395
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 396
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeInt(I)V

    return v1

    .line 376
    :pswitch_13
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 378
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    if-eqz p1, :cond_b

    .line 379
    sget-object p1, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {p1, p2}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p1

    move-object v0, p1

    check-cast v0, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    .line 384
    :cond_b
    invoke-virtual {p0, v0}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl$Stub;->updateDownloadInfo(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    move-result p1

    .line 385
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 386
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeInt(I)V

    return v1

    .line 358
    :pswitch_14
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 360
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    .line 362
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p2

    .line 363
    invoke-virtual {p0, p1, p2}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl$Stub;->updateChunkCount(II)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1

    .line 364
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    if-eqz p1, :cond_c

    .line 366
    invoke-virtual {p3, v1}, Landroid/os/Parcel;->writeInt(I)V

    .line 367
    invoke-virtual {p1, p3, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_a

    .line 370
    :cond_c
    invoke-virtual {p3, v3}, Landroid/os/Parcel;->writeInt(I)V

    :goto_a
    return v1

    .line 343
    :pswitch_15
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 345
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    .line 347
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p4

    .line 349
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result v0

    .line 351
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p2

    .line 352
    invoke-virtual {p0, p1, p4, v0, p2}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl$Stub;->updateSubDownloadChunkIndex(IIII)V

    .line 353
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v1

    .line 328
    :pswitch_16
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 330
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result v3

    .line 332
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result v4

    .line 334
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result v5

    .line 336
    invoke-virtual {p2}, Landroid/os/Parcel;->readLong()J

    move-result-wide v6

    move-object v2, p0

    .line 337
    invoke-virtual/range {v2 .. v7}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl$Stub;->updateSubDownloadChunk(IIIJ)V

    .line 338
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v1

    .line 315
    :pswitch_17
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 317
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    .line 319
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p4

    .line 321
    invoke-virtual {p2}, Landroid/os/Parcel;->readLong()J

    move-result-wide v2

    .line 322
    invoke-virtual {p0, p1, p4, v2, v3}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl$Stub;->updateDownloadChunk(IIJ)V

    .line 323
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v1

    .line 301
    :pswitch_18
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 303
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    if-eqz p1, :cond_d

    .line 304
    sget-object p1, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {p1, p2}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p1

    move-object v0, p1

    check-cast v0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    .line 309
    :cond_d
    invoke-virtual {p0, v0}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl$Stub;->addSubDownloadChunk(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;)V

    .line 310
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v1

    .line 287
    :pswitch_19
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 289
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    if-eqz p1, :cond_e

    .line 290
    sget-object p1, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {p1, p2}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p1

    move-object v0, p1

    check-cast v0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    .line 295
    :cond_e
    invoke-virtual {p0, v0}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl$Stub;->addDownloadChunk(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;)V

    .line 296
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v1

    .line 278
    :pswitch_1a
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 280
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    .line 281
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl$Stub;->removeAllDownloadChunk(I)V

    .line 282
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v1

    .line 268
    :pswitch_1b
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 270
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    .line 271
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl$Stub;->getDownloadChunk(I)Ljava/util/List;

    move-result-object p1

    .line 272
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 273
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeTypedList(Ljava/util/List;)V

    return v1

    .line 260
    :pswitch_1c
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 261
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl$Stub;->getAllDownloadInfo()Ljava/util/List;

    move-result-object p1

    .line 262
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 263
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeTypedList(Ljava/util/List;)V

    return v1

    .line 250
    :pswitch_1d
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 252
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p1

    .line 253
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl$Stub;->getUnCompletedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;

    move-result-object p1

    .line 254
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 255
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeTypedList(Ljava/util/List;)V

    return v1

    .line 240
    :pswitch_1e
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 242
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p1

    .line 243
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl$Stub;->getSuccessedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;

    move-result-object p1

    .line 244
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 245
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeTypedList(Ljava/util/List;)V

    return v1

    .line 230
    :pswitch_1f
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 232
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p1

    .line 233
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl$Stub;->getFailedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;

    move-result-object p1

    .line 234
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 235
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeTypedList(Ljava/util/List;)V

    return v1

    .line 220
    :pswitch_20
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 222
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p1

    .line 223
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl$Stub;->getDownloadInfoList(Ljava/lang/String;)Ljava/util/List;

    move-result-object p1

    .line 224
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 225
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeTypedList(Ljava/util/List;)V

    return v1

    .line 204
    :pswitch_21
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 206
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    .line 207
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl$Stub;->getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1

    .line 208
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    if-eqz p1, :cond_f

    .line 210
    invoke-virtual {p3, v1}, Landroid/os/Parcel;->writeInt(I)V

    .line 211
    invoke-virtual {p1, p3, v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_b

    .line 214
    :cond_f
    invoke-virtual {p3, v3}, Landroid/os/Parcel;->writeInt(I)V

    :goto_b
    return v1

    .line 194
    :pswitch_22
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 196
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    .line 197
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl$Stub;->cacheExist(I)Z

    move-result p1

    .line 198
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 199
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeInt(I)V

    return v1

    .line 187
    :pswitch_23
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 188
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/db/ISqlDownloadCacheAidl$Stub;->init()V

    .line 189
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v1

    .line 182
    :cond_10
    invoke-virtual {p3, v2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    return v1

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_23
        :pswitch_22
        :pswitch_21
        :pswitch_20
        :pswitch_1f
        :pswitch_1e
        :pswitch_1d
        :pswitch_1c
        :pswitch_1b
        :pswitch_1a
        :pswitch_19
        :pswitch_18
        :pswitch_17
        :pswitch_16
        :pswitch_15
        :pswitch_14
        :pswitch_13
        :pswitch_12
        :pswitch_11
        :pswitch_10
        :pswitch_f
        :pswitch_e
        :pswitch_d
        :pswitch_c
        :pswitch_b
        :pswitch_a
        :pswitch_9
        :pswitch_8
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
