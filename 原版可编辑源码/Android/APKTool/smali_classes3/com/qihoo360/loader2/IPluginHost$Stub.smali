.class public abstract Lcom/qihoo360/loader2/IPluginHost$Stub;
.super Landroid/os/Binder;
.source "IPluginHost.java"

# interfaces
.implements Lcom/qihoo360/loader2/IPluginHost;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/qihoo360/loader2/IPluginHost;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x409
    name = "Stub"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/qihoo360/loader2/IPluginHost$Stub$Proxy;
    }
.end annotation


# static fields
.field private static final DESCRIPTOR:Ljava/lang/String; = "com.qihoo360.loader2.IPluginHost"

.field static final TRANSACTION_attachPluginProcess:I = 0x5

.field static final TRANSACTION_dump:I = 0x21

.field static final TRANSACTION_fetchBinder:I = 0x2

.field static final TRANSACTION_fetchManagerServer:I = 0x1d

.field static final TRANSACTION_fetchPersistentCookie:I = 0x3

.field static final TRANSACTION_fetchServiceServer:I = 0x1c

.field static final TRANSACTION_getPidByProcessName:I = 0x1f

.field static final TRANSACTION_getProcessNameByPid:I = 0x20

.field static final TRANSACTION_getTaskAffinityGroupIndex:I = 0x1e

.field static final TRANSACTION_installBinder:I = 0x1

.field static final TRANSACTION_isProcessAlive:I = 0x19

.field static final TRANSACTION_listPlugins:I = 0x6

.field static final TRANSACTION_onReceive:I = 0xf

.field static final TRANSACTION_pluginDownloaded:I = 0x12

.field static final TRANSACTION_pluginExtracted:I = 0x14

.field static final TRANSACTION_pluginUninstalled:I = 0x13

.field static final TRANSACTION_queryPluginBinder:I = 0x1a

.field static final TRANSACTION_queryPluginsReceiverList:I = 0x1b

.field static final TRANSACTION_regActivity:I = 0x7

.field static final TRANSACTION_regPluginBinder:I = 0xb

.field static final TRANSACTION_regReceiver:I = 0xd

.field static final TRANSACTION_regService:I = 0x9

.field static final TRANSACTION_sendIntent2Plugin:I = 0x16

.field static final TRANSACTION_sendIntent2PluginSync:I = 0x18

.field static final TRANSACTION_sendIntent2Process:I = 0x15

.field static final TRANSACTION_sendIntent2ProcessSync:I = 0x17

.field static final TRANSACTION_startPluginProcess:I = 0x4

.field static final TRANSACTION_sumBinders:I = 0x10

.field static final TRANSACTION_unregActivity:I = 0x8

.field static final TRANSACTION_unregPluginBinder:I = 0xc

.field static final TRANSACTION_unregReceiver:I = 0xe

.field static final TRANSACTION_unregService:I = 0xa

.field static final TRANSACTION_updatePluginInfo:I = 0x11


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 176
    invoke-direct {p0}, Landroid/os/Binder;-><init>()V

    const-string v0, "com.qihoo360.loader2.IPluginHost"

    .line 177
    invoke-virtual {p0, p0, v0}, Lcom/qihoo360/loader2/IPluginHost$Stub;->attachInterface(Landroid/os/IInterface;Ljava/lang/String;)V

    return-void
.end method

.method public static asInterface(Landroid/os/IBinder;)Lcom/qihoo360/loader2/IPluginHost;
    .locals 2

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    :cond_0
    const-string v0, "com.qihoo360.loader2.IPluginHost"

    .line 188
    invoke-interface {p0, v0}, Landroid/os/IBinder;->queryLocalInterface(Ljava/lang/String;)Landroid/os/IInterface;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 189
    instance-of v1, v0, Lcom/qihoo360/loader2/IPluginHost;

    if-eqz v1, :cond_1

    .line 190
    check-cast v0, Lcom/qihoo360/loader2/IPluginHost;

    return-object v0

    .line 192
    :cond_1
    new-instance v0, Lcom/qihoo360/loader2/IPluginHost$Stub$Proxy;

    invoke-direct {v0, p0}, Lcom/qihoo360/loader2/IPluginHost$Stub$Proxy;-><init>(Landroid/os/IBinder;)V

    return-object v0
.end method

.method public static getDefaultImpl()Lcom/qihoo360/loader2/IPluginHost;
    .locals 1

    .line 1490
    sget-object v0, Lcom/qihoo360/loader2/IPluginHost$Stub$Proxy;->sDefaultImpl:Lcom/qihoo360/loader2/IPluginHost;

    return-object v0
.end method

.method public static setDefaultImpl(Lcom/qihoo360/loader2/IPluginHost;)Z
    .locals 1

    .line 1480
    sget-object v0, Lcom/qihoo360/loader2/IPluginHost$Stub$Proxy;->sDefaultImpl:Lcom/qihoo360/loader2/IPluginHost;

    if-nez v0, :cond_1

    if-eqz p0, :cond_0

    .line 1484
    sput-object p0, Lcom/qihoo360/loader2/IPluginHost$Stub$Proxy;->sDefaultImpl:Lcom/qihoo360/loader2/IPluginHost;

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0

    .line 1481
    :cond_1
    new-instance p0, Ljava/lang/IllegalStateException;

    const-string v0, "setDefaultImpl() called twice"

    invoke-direct {p0, v0}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw p0
.end method


# virtual methods
.method public asBinder()Landroid/os/IBinder;
    .locals 0

    return-object p0
.end method

.method public onTransact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    const v0, 0x5f4e5446

    const/4 v1, 0x1

    const-string v2, "com.qihoo360.loader2.IPluginHost"

    if-eq p1, v0, :cond_11

    const/4 v0, 0x0

    const/4 v3, 0x0

    packed-switch p1, :pswitch_data_0

    .line 634
    invoke-super {p0, p1, p2, p3, p4}, Landroid/os/Binder;->onTransact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result p1

    return p1

    .line 626
    :pswitch_0
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 627
    invoke-virtual {p0}, Lcom/qihoo360/loader2/IPluginHost$Stub;->dump()Ljava/lang/String;

    move-result-object p1

    .line 628
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 629
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    return v1

    .line 616
    :pswitch_1
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 618
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    .line 619
    invoke-virtual {p0, p1}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getProcessNameByPid(I)Ljava/lang/String;

    move-result-object p1

    .line 620
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 621
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    return v1

    .line 606
    :pswitch_2
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 608
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p1

    .line 609
    invoke-virtual {p0, p1}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getPidByProcessName(Ljava/lang/String;)I

    move-result p1

    .line 610
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 611
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeInt(I)V

    return v1

    .line 596
    :pswitch_3
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 598
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p1

    .line 599
    invoke-virtual {p0, p1}, Lcom/qihoo360/loader2/IPluginHost$Stub;->getTaskAffinityGroupIndex(Ljava/lang/String;)I

    move-result p1

    .line 600
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 601
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeInt(I)V

    return v1

    .line 588
    :pswitch_4
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 589
    invoke-virtual {p0}, Lcom/qihoo360/loader2/IPluginHost$Stub;->fetchManagerServer()Lcom/qihoo360/replugin/packages/IPluginManagerServer;

    move-result-object p1

    .line 590
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    if-eqz p1, :cond_0

    .line 591
    invoke-interface {p1}, Lcom/qihoo360/replugin/packages/IPluginManagerServer;->asBinder()Landroid/os/IBinder;

    move-result-object v3

    :cond_0
    invoke-virtual {p3, v3}, Landroid/os/Parcel;->writeStrongBinder(Landroid/os/IBinder;)V

    return v1

    .line 580
    :pswitch_5
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 581
    invoke-virtual {p0}, Lcom/qihoo360/loader2/IPluginHost$Stub;->fetchServiceServer()Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;

    move-result-object p1

    .line 582
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    if-eqz p1, :cond_1

    .line 583
    invoke-interface {p1}, Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;->asBinder()Landroid/os/IBinder;

    move-result-object v3

    :cond_1
    invoke-virtual {p3, v3}, Landroid/os/Parcel;->writeStrongBinder(Landroid/os/IBinder;)V

    return v1

    .line 565
    :pswitch_6
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 567
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    if-eqz p1, :cond_2

    .line 568
    sget-object p1, Landroid/content/Intent;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {p1, p2}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p1

    move-object v3, p1

    check-cast v3, Landroid/content/Intent;

    .line 573
    :cond_2
    invoke-virtual {p0, v3}, Lcom/qihoo360/loader2/IPluginHost$Stub;->queryPluginsReceiverList(Landroid/content/Intent;)Ljava/util/List;

    move-result-object p1

    .line 574
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 575
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeList(Ljava/util/List;)V

    return v1

    .line 553
    :pswitch_7
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 555
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p1

    .line 557
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p2

    .line 558
    invoke-virtual {p0, p1, p2}, Lcom/qihoo360/loader2/IPluginHost$Stub;->queryPluginBinder(Ljava/lang/String;Ljava/lang/String;)Landroid/os/IBinder;

    move-result-object p1

    .line 559
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 560
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeStrongBinder(Landroid/os/IBinder;)V

    return v1

    .line 543
    :pswitch_8
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 545
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p1

    .line 546
    invoke-virtual {p0, p1}, Lcom/qihoo360/loader2/IPluginHost$Stub;->isProcessAlive(Ljava/lang/String;)Z

    move-result p1

    .line 547
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 548
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeInt(I)V

    return v1

    .line 527
    :pswitch_9
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 529
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p1

    .line 531
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p4

    if-eqz p4, :cond_3

    .line 532
    sget-object p4, Landroid/content/Intent;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {p4, p2}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p2

    move-object v3, p2

    check-cast v3, Landroid/content/Intent;

    .line 537
    :cond_3
    invoke-virtual {p0, p1, v3}, Lcom/qihoo360/loader2/IPluginHost$Stub;->sendIntent2PluginSync(Ljava/lang/String;Landroid/content/Intent;)V

    .line 538
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v1

    .line 511
    :pswitch_a
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 513
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p1

    .line 515
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p4

    if-eqz p4, :cond_4

    .line 516
    sget-object p4, Landroid/content/Intent;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {p4, p2}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p2

    move-object v3, p2

    check-cast v3, Landroid/content/Intent;

    .line 521
    :cond_4
    invoke-virtual {p0, p1, v3}, Lcom/qihoo360/loader2/IPluginHost$Stub;->sendIntent2ProcessSync(Ljava/lang/String;Landroid/content/Intent;)V

    .line 522
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v1

    .line 496
    :pswitch_b
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 498
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p1

    .line 500
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p3

    if-eqz p3, :cond_5

    .line 501
    sget-object p3, Landroid/content/Intent;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {p3, p2}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p2

    move-object v3, p2

    check-cast v3, Landroid/content/Intent;

    .line 506
    :cond_5
    invoke-virtual {p0, p1, v3}, Lcom/qihoo360/loader2/IPluginHost$Stub;->sendIntent2Plugin(Ljava/lang/String;Landroid/content/Intent;)V

    return v1

    .line 481
    :pswitch_c
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 483
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p1

    .line 485
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p3

    if-eqz p3, :cond_6

    .line 486
    sget-object p3, Landroid/content/Intent;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {p3, p2}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p2

    move-object v3, p2

    check-cast v3, Landroid/content/Intent;

    .line 491
    :cond_6
    invoke-virtual {p0, p1, v3}, Lcom/qihoo360/loader2/IPluginHost$Stub;->sendIntent2Process(Ljava/lang/String;Landroid/content/Intent;)V

    return v1

    .line 471
    :pswitch_d
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 473
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p1

    .line 474
    invoke-virtual {p0, p1}, Lcom/qihoo360/loader2/IPluginHost$Stub;->pluginExtracted(Ljava/lang/String;)Z

    move-result p1

    .line 475
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 476
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeInt(I)V

    return v1

    .line 456
    :pswitch_e
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 458
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    if-eqz p1, :cond_7

    .line 459
    sget-object p1, Lcom/qihoo360/replugin/model/PluginInfo;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {p1, p2}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p1

    move-object v3, p1

    check-cast v3, Lcom/qihoo360/replugin/model/PluginInfo;

    .line 464
    :cond_7
    invoke-virtual {p0, v3}, Lcom/qihoo360/loader2/IPluginHost$Stub;->pluginUninstalled(Lcom/qihoo360/replugin/model/PluginInfo;)Z

    move-result p1

    .line 465
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 466
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeInt(I)V

    return v1

    .line 438
    :pswitch_f
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 440
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p1

    .line 442
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p2

    if-eqz p2, :cond_8

    move p2, v1

    goto :goto_0

    :cond_8
    move p2, v0

    .line 443
    :goto_0
    invoke-virtual {p0, p1, p2}, Lcom/qihoo360/loader2/IPluginHost$Stub;->pluginDownloaded(Ljava/lang/String;Z)Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object p1

    .line 444
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    if-eqz p1, :cond_9

    .line 446
    invoke-virtual {p3, v1}, Landroid/os/Parcel;->writeInt(I)V

    .line 447
    invoke-virtual {p1, p3, v1}, Lcom/qihoo360/replugin/model/PluginInfo;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_1

    .line 450
    :cond_9
    invoke-virtual {p3, v0}, Landroid/os/Parcel;->writeInt(I)V

    :goto_1
    return v1

    .line 424
    :pswitch_10
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 426
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    if-eqz p1, :cond_a

    .line 427
    sget-object p1, Lcom/qihoo360/replugin/model/PluginInfo;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {p1, p2}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p1

    move-object v3, p1

    check-cast v3, Lcom/qihoo360/replugin/model/PluginInfo;

    .line 432
    :cond_a
    invoke-virtual {p0, v3}, Lcom/qihoo360/loader2/IPluginHost$Stub;->updatePluginInfo(Lcom/qihoo360/replugin/model/PluginInfo;)V

    .line 433
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v1

    .line 414
    :pswitch_11
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 416
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    .line 417
    invoke-virtual {p0, p1}, Lcom/qihoo360/loader2/IPluginHost$Stub;->sumBinders(I)I

    move-result p1

    .line 418
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 419
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeInt(I)V

    return v1

    .line 396
    :pswitch_12
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 398
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p1

    .line 400
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p4

    .line 402
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result v0

    if-eqz v0, :cond_b

    .line 403
    sget-object v0, Landroid/content/Intent;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {v0, p2}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p2

    move-object v3, p2

    check-cast v3, Landroid/content/Intent;

    .line 408
    :cond_b
    invoke-virtual {p0, p1, p4, v3}, Lcom/qihoo360/loader2/IPluginHost$Stub;->onReceive(Ljava/lang/String;Ljava/lang/String;Landroid/content/Intent;)V

    .line 409
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v1

    .line 389
    :pswitch_13
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 390
    invoke-virtual {p0}, Lcom/qihoo360/loader2/IPluginHost$Stub;->unregReceiver()V

    .line 391
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v1

    .line 377
    :pswitch_14
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 379
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p1

    .line 381
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p4

    invoke-virtual {p4}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object p4

    .line 382
    invoke-virtual {p2, p4}, Landroid/os/Parcel;->readHashMap(Ljava/lang/ClassLoader;)Ljava/util/HashMap;

    move-result-object p2

    .line 383
    invoke-virtual {p0, p1, p2}, Lcom/qihoo360/loader2/IPluginHost$Stub;->regReceiver(Ljava/lang/String;Ljava/util/Map;)V

    .line 384
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v1

    .line 361
    :pswitch_15
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 363
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    if-eqz p1, :cond_c

    .line 364
    sget-object p1, Lcom/qihoo360/loader2/PluginBinderInfo;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {p1, p2}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p1

    move-object v3, p1

    check-cast v3, Lcom/qihoo360/loader2/PluginBinderInfo;

    .line 370
    :cond_c
    invoke-virtual {p2}, Landroid/os/Parcel;->readStrongBinder()Landroid/os/IBinder;

    move-result-object p1

    .line 371
    invoke-virtual {p0, v3, p1}, Lcom/qihoo360/loader2/IPluginHost$Stub;->unregPluginBinder(Lcom/qihoo360/loader2/PluginBinderInfo;Landroid/os/IBinder;)V

    .line 372
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v1

    .line 345
    :pswitch_16
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 347
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    if-eqz p1, :cond_d

    .line 348
    sget-object p1, Lcom/qihoo360/loader2/PluginBinderInfo;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {p1, p2}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p1

    move-object v3, p1

    check-cast v3, Lcom/qihoo360/loader2/PluginBinderInfo;

    .line 354
    :cond_d
    invoke-virtual {p2}, Landroid/os/Parcel;->readStrongBinder()Landroid/os/IBinder;

    move-result-object p1

    .line 355
    invoke-virtual {p0, v3, p1}, Lcom/qihoo360/loader2/IPluginHost$Stub;->regPluginBinder(Lcom/qihoo360/loader2/PluginBinderInfo;Landroid/os/IBinder;)V

    .line 356
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v1

    .line 332
    :pswitch_17
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 334
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    .line 336
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p4

    .line 338
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p2

    .line 339
    invoke-virtual {p0, p1, p4, p2}, Lcom/qihoo360/loader2/IPluginHost$Stub;->unregService(ILjava/lang/String;Ljava/lang/String;)V

    .line 340
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v1

    .line 319
    :pswitch_18
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 321
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    .line 323
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p4

    .line 325
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p2

    .line 326
    invoke-virtual {p0, p1, p4, p2}, Lcom/qihoo360/loader2/IPluginHost$Stub;->regService(ILjava/lang/String;Ljava/lang/String;)V

    .line 327
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v1

    .line 304
    :pswitch_19
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 306
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    .line 308
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p4

    .line 310
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 312
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p2

    .line 313
    invoke-virtual {p0, p1, p4, v0, p2}, Lcom/qihoo360/loader2/IPluginHost$Stub;->unregActivity(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 314
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v1

    .line 289
    :pswitch_1a
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 291
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    .line 293
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p4

    .line 295
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v0

    .line 297
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p2

    .line 298
    invoke-virtual {p0, p1, p4, v0, p2}, Lcom/qihoo360/loader2/IPluginHost$Stub;->regActivity(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 299
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v1

    .line 281
    :pswitch_1b
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 282
    invoke-virtual {p0}, Lcom/qihoo360/loader2/IPluginHost$Stub;->listPlugins()Ljava/util/List;

    move-result-object p1

    .line 283
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 284
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeTypedList(Ljava/util/List;)V

    return v1

    .line 265
    :pswitch_1c
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 267
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p1

    .line 269
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p4

    .line 271
    invoke-virtual {p2}, Landroid/os/Parcel;->readStrongBinder()Landroid/os/IBinder;

    move-result-object v0

    .line 273
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p2

    .line 274
    invoke-virtual {p0, p1, p4, v0, p2}, Lcom/qihoo360/loader2/IPluginHost$Stub;->attachPluginProcess(Ljava/lang/String;ILandroid/os/IBinder;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 275
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 276
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    return v1

    .line 239
    :pswitch_1d
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 241
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p1

    .line 243
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p4

    .line 245
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result v2

    if-eqz v2, :cond_e

    .line 246
    sget-object v2, Lcom/qihoo360/loader2/PluginBinderInfo;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {v2, p2}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/qihoo360/loader2/PluginBinderInfo;

    goto :goto_2

    :cond_e
    move-object p2, v3

    .line 251
    :goto_2
    invoke-virtual {p0, p1, p4, p2}, Lcom/qihoo360/loader2/IPluginHost$Stub;->startPluginProcess(Ljava/lang/String;ILcom/qihoo360/loader2/PluginBinderInfo;)Lcom/qihoo360/loader2/IPluginClient;

    move-result-object p1

    .line 252
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    if-eqz p1, :cond_f

    .line 253
    invoke-interface {p1}, Lcom/qihoo360/loader2/IPluginClient;->asBinder()Landroid/os/IBinder;

    move-result-object v3

    :cond_f
    invoke-virtual {p3, v3}, Landroid/os/Parcel;->writeStrongBinder(Landroid/os/IBinder;)V

    if-eqz p2, :cond_10

    .line 255
    invoke-virtual {p3, v1}, Landroid/os/Parcel;->writeInt(I)V

    .line 256
    invoke-virtual {p2, p3, v1}, Lcom/qihoo360/loader2/PluginBinderInfo;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_3

    .line 259
    :cond_10
    invoke-virtual {p3, v0}, Landroid/os/Parcel;->writeInt(I)V

    :goto_3
    return v1

    .line 231
    :pswitch_1e
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 232
    invoke-virtual {p0}, Lcom/qihoo360/loader2/IPluginHost$Stub;->fetchPersistentCookie()J

    move-result-wide p1

    .line 233
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 234
    invoke-virtual {p3, p1, p2}, Landroid/os/Parcel;->writeLong(J)V

    return v1

    .line 221
    :pswitch_1f
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 223
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p1

    .line 224
    invoke-virtual {p0, p1}, Lcom/qihoo360/loader2/IPluginHost$Stub;->fetchBinder(Ljava/lang/String;)Landroid/os/IBinder;

    move-result-object p1

    .line 225
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 226
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeStrongBinder(Landroid/os/IBinder;)V

    return v1

    .line 210
    :pswitch_20
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 212
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p1

    .line 214
    invoke-virtual {p2}, Landroid/os/Parcel;->readStrongBinder()Landroid/os/IBinder;

    move-result-object p2

    .line 215
    invoke-virtual {p0, p1, p2}, Lcom/qihoo360/loader2/IPluginHost$Stub;->installBinder(Ljava/lang/String;Landroid/os/IBinder;)V

    .line 216
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v1

    .line 205
    :cond_11
    invoke-virtual {p3, v2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    return v1

    :pswitch_data_0
    .packed-switch 0x1
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
