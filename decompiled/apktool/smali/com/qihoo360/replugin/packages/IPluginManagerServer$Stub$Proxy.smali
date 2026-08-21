.class Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub$Proxy;
.super Ljava/lang/Object;
.source "IPluginManagerServer.java"

# interfaces
.implements Lcom/qihoo360/replugin/packages/IPluginManagerServer;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "Proxy"
.end annotation


# static fields
.field public static sDefaultImpl:Lcom/qihoo360/replugin/packages/IPluginManagerServer;


# instance fields
.field private mRemote:Landroid/os/IBinder;


# direct methods
.method constructor <init>(Landroid/os/IBinder;)V
    .locals 0

    .line 292
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 293
    iput-object p1, p0, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    return-void
.end method


# virtual methods
.method public addToRunningPlugins(Ljava/lang/String;ILjava/lang/String;)V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 547
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 548
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.replugin.packages.IPluginManagerServer"

    .line 550
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 551
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 552
    invoke-virtual {v0, p2}, Landroid/os/Parcel;->writeInt(I)V

    .line 553
    invoke-virtual {v0, p3}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 554
    iget-object v2, p0, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0x9

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 555
    invoke-static {}, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub;->getDefaultImpl()Lcom/qihoo360/replugin/packages/IPluginManagerServer;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 556
    invoke-static {}, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub;->getDefaultImpl()Lcom/qihoo360/replugin/packages/IPluginManagerServer;

    move-result-object v2

    invoke-interface {v2, p1, p2, p3}, Lcom/qihoo360/replugin/packages/IPluginManagerServer;->addToRunningPlugins(Ljava/lang/String;ILjava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 562
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 563
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 559
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 562
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 563
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception p1

    .line 562
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 563
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public asBinder()Landroid/os/IBinder;
    .locals 1

    .line 297
    iget-object v0, p0, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    return-object v0
.end method

.method public getInterfaceDescriptor()Ljava/lang/String;
    .locals 1

    const-string v0, "com.qihoo360.replugin.packages.IPluginManagerServer"

    return-object v0
.end method

.method public getRunningPlugins()Lcom/qihoo360/replugin/packages/PluginRunningList;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 457
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 458
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.replugin.packages.IPluginManagerServer"

    .line 461
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 462
    iget-object v2, p0, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/4 v3, 0x6

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 463
    invoke-static {}, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub;->getDefaultImpl()Lcom/qihoo360/replugin/packages/IPluginManagerServer;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 464
    invoke-static {}, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub;->getDefaultImpl()Lcom/qihoo360/replugin/packages/IPluginManagerServer;

    move-result-object v2

    invoke-interface {v2}, Lcom/qihoo360/replugin/packages/IPluginManagerServer;->getRunningPlugins()Lcom/qihoo360/replugin/packages/PluginRunningList;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 475
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 476
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    .line 466
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 467
    invoke-virtual {v1}, Landroid/os/Parcel;->readInt()I

    move-result v2

    if-eqz v2, :cond_1

    .line 468
    sget-object v2, Lcom/qihoo360/replugin/packages/PluginRunningList;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {v2, v1}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/qihoo360/replugin/packages/PluginRunningList;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :cond_1
    const/4 v2, 0x0

    .line 475
    :goto_0
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 476
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    :catchall_0
    move-exception v2

    .line 475
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 476
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw v2
.end method

.method public getRunningProcessesByPlugin(Ljava/lang/String;)[Ljava/lang/String;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 574
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 575
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.replugin.packages.IPluginManagerServer"

    .line 578
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 579
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 580
    iget-object v2, p0, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v3, 0xa

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 581
    invoke-static {}, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub;->getDefaultImpl()Lcom/qihoo360/replugin/packages/IPluginManagerServer;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 582
    invoke-static {}, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub;->getDefaultImpl()Lcom/qihoo360/replugin/packages/IPluginManagerServer;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/qihoo360/replugin/packages/IPluginManagerServer;->getRunningProcessesByPlugin(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 588
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 589
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    .line 584
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 585
    invoke-virtual {v1}, Landroid/os/Parcel;->createStringArray()[Ljava/lang/String;

    move-result-object p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 588
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 589
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    :catchall_0
    move-exception p1

    .line 588
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 589
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public install(Ljava/lang/String;Z)Lcom/qihoo360/replugin/model/PluginInfo;
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 312
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 313
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.replugin.packages.IPluginManagerServer"

    .line 316
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 317
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    const/4 v2, 0x1

    const/4 v3, 0x0

    if-eqz p2, :cond_0

    move v4, v2

    goto :goto_0

    :cond_0
    move v4, v3

    .line 318
    :goto_0
    invoke-virtual {v0, v4}, Landroid/os/Parcel;->writeInt(I)V

    .line 319
    iget-object v4, p0, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    invoke-interface {v4, v2, v0, v1, v3}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_1

    .line 320
    invoke-static {}, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub;->getDefaultImpl()Lcom/qihoo360/replugin/packages/IPluginManagerServer;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 321
    invoke-static {}, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub;->getDefaultImpl()Lcom/qihoo360/replugin/packages/IPluginManagerServer;

    move-result-object v2

    invoke-interface {v2, p1, p2}, Lcom/qihoo360/replugin/packages/IPluginManagerServer;->install(Ljava/lang/String;Z)Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 332
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 333
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    .line 323
    :cond_1
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 324
    invoke-virtual {v1}, Landroid/os/Parcel;->readInt()I

    move-result p1

    if-eqz p1, :cond_2

    .line 325
    sget-object p1, Lcom/qihoo360/replugin/model/PluginInfo;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {p1, v1}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/qihoo360/replugin/model/PluginInfo;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :cond_2
    const/4 p1, 0x0

    .line 332
    :goto_1
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 333
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object p1

    :catchall_0
    move-exception p1

    .line 332
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 333
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public isPluginRunning(Ljava/lang/String;Ljava/lang/String;)Z
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 489
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 490
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.replugin.packages.IPluginManagerServer"

    .line 493
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 494
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 495
    invoke-virtual {v0, p2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 496
    iget-object v2, p0, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/4 v3, 0x7

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 497
    invoke-static {}, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub;->getDefaultImpl()Lcom/qihoo360/replugin/packages/IPluginManagerServer;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 498
    invoke-static {}, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub;->getDefaultImpl()Lcom/qihoo360/replugin/packages/IPluginManagerServer;

    move-result-object v2

    invoke-interface {v2, p1, p2}, Lcom/qihoo360/replugin/packages/IPluginManagerServer;->isPluginRunning(Ljava/lang/String;Ljava/lang/String;)Z

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 504
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 505
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return p1

    .line 500
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 501
    invoke-virtual {v1}, Landroid/os/Parcel;->readInt()I

    move-result p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz p1, :cond_1

    const/4 v4, 0x1

    .line 504
    :cond_1
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 505
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return v4

    :catchall_0
    move-exception p1

    .line 504
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 505
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public load()Ljava/util/List;
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

    .line 381
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 382
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.replugin.packages.IPluginManagerServer"

    .line 385
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 386
    iget-object v2, p0, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/4 v3, 0x3

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 387
    invoke-static {}, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub;->getDefaultImpl()Lcom/qihoo360/replugin/packages/IPluginManagerServer;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 388
    invoke-static {}, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub;->getDefaultImpl()Lcom/qihoo360/replugin/packages/IPluginManagerServer;

    move-result-object v2

    invoke-interface {v2}, Lcom/qihoo360/replugin/packages/IPluginManagerServer;->load()Ljava/util/List;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 394
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 395
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    .line 390
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 391
    sget-object v2, Lcom/qihoo360/replugin/model/PluginInfo;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-virtual {v1, v2}, Landroid/os/Parcel;->createTypedArrayList(Landroid/os/Parcelable$Creator;)Ljava/util/ArrayList;

    move-result-object v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 394
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 395
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    :catchall_0
    move-exception v2

    .line 394
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 395
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw v2
.end method

.method public syncRunningPlugins(Lcom/qihoo360/replugin/packages/PluginRunningList;)V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 516
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 517
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.replugin.packages.IPluginManagerServer"

    .line 519
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    const/4 v2, 0x0

    if-eqz p1, :cond_0

    const/4 v3, 0x1

    .line 521
    invoke-virtual {v0, v3}, Landroid/os/Parcel;->writeInt(I)V

    .line 522
    invoke-virtual {p1, v0, v2}, Lcom/qihoo360/replugin/packages/PluginRunningList;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_0

    .line 525
    :cond_0
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInt(I)V

    .line 527
    :goto_0
    iget-object v3, p0, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/16 v4, 0x8

    invoke-interface {v3, v4, v0, v1, v2}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_1

    .line 528
    invoke-static {}, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub;->getDefaultImpl()Lcom/qihoo360/replugin/packages/IPluginManagerServer;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 529
    invoke-static {}, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub;->getDefaultImpl()Lcom/qihoo360/replugin/packages/IPluginManagerServer;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/qihoo360/replugin/packages/IPluginManagerServer;->syncRunningPlugins(Lcom/qihoo360/replugin/packages/PluginRunningList;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 535
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 536
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 532
    :cond_1
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 535
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 536
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception p1

    .line 535
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 536
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public uninstall(Lcom/qihoo360/replugin/model/PluginInfo;)Z
    .locals 6
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 347
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 348
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.replugin.packages.IPluginManagerServer"

    .line 351
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    const/4 v2, 0x1

    const/4 v3, 0x0

    if-eqz p1, :cond_0

    .line 353
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInt(I)V

    .line 354
    invoke-virtual {p1, v0, v3}, Lcom/qihoo360/replugin/model/PluginInfo;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_0

    .line 357
    :cond_0
    invoke-virtual {v0, v3}, Landroid/os/Parcel;->writeInt(I)V

    .line 359
    :goto_0
    iget-object v4, p0, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/4 v5, 0x2

    invoke-interface {v4, v5, v0, v1, v3}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v4

    if-nez v4, :cond_1

    .line 360
    invoke-static {}, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub;->getDefaultImpl()Lcom/qihoo360/replugin/packages/IPluginManagerServer;

    move-result-object v4

    if-eqz v4, :cond_1

    .line 361
    invoke-static {}, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub;->getDefaultImpl()Lcom/qihoo360/replugin/packages/IPluginManagerServer;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/qihoo360/replugin/packages/IPluginManagerServer;->uninstall(Lcom/qihoo360/replugin/model/PluginInfo;)Z

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 367
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 368
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return p1

    .line 363
    :cond_1
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 364
    invoke-virtual {v1}, Landroid/os/Parcel;->readInt()I

    move-result p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz p1, :cond_2

    goto :goto_1

    :cond_2
    move v2, v3

    .line 367
    :goto_1
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 368
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return v2

    :catchall_0
    move-exception p1

    .line 367
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 368
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method

.method public updateAll()Ljava/util/List;
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

    .line 406
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 407
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.replugin.packages.IPluginManagerServer"

    .line 410
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 411
    iget-object v2, p0, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/4 v3, 0x4

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 412
    invoke-static {}, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub;->getDefaultImpl()Lcom/qihoo360/replugin/packages/IPluginManagerServer;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 413
    invoke-static {}, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub;->getDefaultImpl()Lcom/qihoo360/replugin/packages/IPluginManagerServer;

    move-result-object v2

    invoke-interface {v2}, Lcom/qihoo360/replugin/packages/IPluginManagerServer;->updateAll()Ljava/util/List;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 419
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 420
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    .line 415
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 416
    sget-object v2, Lcom/qihoo360/replugin/model/PluginInfo;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-virtual {v1, v2}, Landroid/os/Parcel;->createTypedArrayList(Landroid/os/Parcelable$Creator;)Ljava/util/ArrayList;

    move-result-object v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 419
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 420
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    :catchall_0
    move-exception v2

    .line 419
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 420
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw v2
.end method

.method public updateUsed(Ljava/lang/String;Z)V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 432
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 433
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.qihoo360.replugin.packages.IPluginManagerServer"

    .line 435
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 436
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    const/4 v2, 0x0

    if-eqz p2, :cond_0

    const/4 v3, 0x1

    goto :goto_0

    :cond_0
    move v3, v2

    .line 437
    :goto_0
    invoke-virtual {v0, v3}, Landroid/os/Parcel;->writeInt(I)V

    .line 438
    iget-object v3, p0, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub$Proxy;->mRemote:Landroid/os/IBinder;

    const/4 v4, 0x5

    invoke-interface {v3, v4, v0, v1, v2}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_1

    .line 439
    invoke-static {}, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub;->getDefaultImpl()Lcom/qihoo360/replugin/packages/IPluginManagerServer;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 440
    invoke-static {}, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub;->getDefaultImpl()Lcom/qihoo360/replugin/packages/IPluginManagerServer;

    move-result-object v2

    invoke-interface {v2, p1, p2}, Lcom/qihoo360/replugin/packages/IPluginManagerServer;->updateUsed(Ljava/lang/String;Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 446
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 447
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 443
    :cond_1
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 446
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 447
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception p1

    .line 446
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 447
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    throw p1
.end method
