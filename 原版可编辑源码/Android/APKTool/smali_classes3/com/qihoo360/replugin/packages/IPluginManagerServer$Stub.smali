.class public abstract Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub;
.super Landroid/os/Binder;
.source "IPluginManagerServer.java"

# interfaces
.implements Lcom/qihoo360/replugin/packages/IPluginManagerServer;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/qihoo360/replugin/packages/IPluginManagerServer;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x409
    name = "Stub"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub$Proxy;
    }
.end annotation


# static fields
.field private static final DESCRIPTOR:Ljava/lang/String; = "com.qihoo360.replugin.packages.IPluginManagerServer"

.field static final TRANSACTION_addToRunningPlugins:I = 0x9

.field static final TRANSACTION_getRunningPlugins:I = 0x6

.field static final TRANSACTION_getRunningProcessesByPlugin:I = 0xa

.field static final TRANSACTION_install:I = 0x1

.field static final TRANSACTION_isPluginRunning:I = 0x7

.field static final TRANSACTION_load:I = 0x3

.field static final TRANSACTION_syncRunningPlugins:I = 0x8

.field static final TRANSACTION_uninstall:I = 0x2

.field static final TRANSACTION_updateAll:I = 0x4

.field static final TRANSACTION_updateUsed:I = 0x5


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 127
    invoke-direct {p0}, Landroid/os/Binder;-><init>()V

    const-string v0, "com.qihoo360.replugin.packages.IPluginManagerServer"

    .line 128
    invoke-virtual {p0, p0, v0}, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub;->attachInterface(Landroid/os/IInterface;Ljava/lang/String;)V

    return-void
.end method

.method public static asInterface(Landroid/os/IBinder;)Lcom/qihoo360/replugin/packages/IPluginManagerServer;
    .locals 2

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    :cond_0
    const-string v0, "com.qihoo360.replugin.packages.IPluginManagerServer"

    .line 139
    invoke-interface {p0, v0}, Landroid/os/IBinder;->queryLocalInterface(Ljava/lang/String;)Landroid/os/IInterface;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 140
    instance-of v1, v0, Lcom/qihoo360/replugin/packages/IPluginManagerServer;

    if-eqz v1, :cond_1

    .line 141
    check-cast v0, Lcom/qihoo360/replugin/packages/IPluginManagerServer;

    return-object v0

    .line 143
    :cond_1
    new-instance v0, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub$Proxy;

    invoke-direct {v0, p0}, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub$Proxy;-><init>(Landroid/os/IBinder;)V

    return-object v0
.end method

.method public static getDefaultImpl()Lcom/qihoo360/replugin/packages/IPluginManagerServer;
    .locals 1

    .line 619
    sget-object v0, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub$Proxy;->sDefaultImpl:Lcom/qihoo360/replugin/packages/IPluginManagerServer;

    return-object v0
.end method

.method public static setDefaultImpl(Lcom/qihoo360/replugin/packages/IPluginManagerServer;)Z
    .locals 1

    .line 609
    sget-object v0, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub$Proxy;->sDefaultImpl:Lcom/qihoo360/replugin/packages/IPluginManagerServer;

    if-nez v0, :cond_1

    if-eqz p0, :cond_0

    .line 613
    sput-object p0, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub$Proxy;->sDefaultImpl:Lcom/qihoo360/replugin/packages/IPluginManagerServer;

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0

    .line 610
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

    const-string v2, "com.qihoo360.replugin.packages.IPluginManagerServer"

    if-eq p1, v0, :cond_6

    const/4 v0, 0x0

    const/4 v3, 0x0

    packed-switch p1, :pswitch_data_0

    .line 284
    invoke-super {p0, p1, p2, p3, p4}, Landroid/os/Binder;->onTransact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result p1

    return p1

    .line 274
    :pswitch_0
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 276
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p1

    .line 277
    invoke-virtual {p0, p1}, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub;->getRunningProcessesByPlugin(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p1

    .line 278
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 279
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeStringArray([Ljava/lang/String;)V

    return v1

    .line 261
    :pswitch_1
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 263
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p1

    .line 265
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p4

    .line 267
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p2

    .line 268
    invoke-virtual {p0, p1, p4, p2}, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub;->addToRunningPlugins(Ljava/lang/String;ILjava/lang/String;)V

    .line 269
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v1

    .line 247
    :pswitch_2
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 249
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    if-eqz p1, :cond_0

    .line 250
    sget-object p1, Lcom/qihoo360/replugin/packages/PluginRunningList;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {p1, p2}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p1

    move-object v0, p1

    check-cast v0, Lcom/qihoo360/replugin/packages/PluginRunningList;

    .line 255
    :cond_0
    invoke-virtual {p0, v0}, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub;->syncRunningPlugins(Lcom/qihoo360/replugin/packages/PluginRunningList;)V

    .line 256
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v1

    .line 235
    :pswitch_3
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 237
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p1

    .line 239
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p2

    .line 240
    invoke-virtual {p0, p1, p2}, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub;->isPluginRunning(Ljava/lang/String;Ljava/lang/String;)Z

    move-result p1

    .line 241
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 242
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeInt(I)V

    return v1

    .line 221
    :pswitch_4
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 222
    invoke-virtual {p0}, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub;->getRunningPlugins()Lcom/qihoo360/replugin/packages/PluginRunningList;

    move-result-object p1

    .line 223
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    if-eqz p1, :cond_1

    .line 225
    invoke-virtual {p3, v1}, Landroid/os/Parcel;->writeInt(I)V

    .line 226
    invoke-virtual {p1, p3, v1}, Lcom/qihoo360/replugin/packages/PluginRunningList;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_0

    .line 229
    :cond_1
    invoke-virtual {p3, v3}, Landroid/os/Parcel;->writeInt(I)V

    :goto_0
    return v1

    .line 210
    :pswitch_5
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 212
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p1

    .line 214
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p2

    if-eqz p2, :cond_2

    move v3, v1

    .line 215
    :cond_2
    invoke-virtual {p0, p1, v3}, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub;->updateUsed(Ljava/lang/String;Z)V

    .line 216
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v1

    .line 202
    :pswitch_6
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 203
    invoke-virtual {p0}, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub;->updateAll()Ljava/util/List;

    move-result-object p1

    .line 204
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 205
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeTypedList(Ljava/util/List;)V

    return v1

    .line 194
    :pswitch_7
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 195
    invoke-virtual {p0}, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub;->load()Ljava/util/List;

    move-result-object p1

    .line 196
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 197
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeTypedList(Ljava/util/List;)V

    return v1

    .line 179
    :pswitch_8
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 181
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    if-eqz p1, :cond_3

    .line 182
    sget-object p1, Lcom/qihoo360/replugin/model/PluginInfo;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {p1, p2}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p1

    move-object v0, p1

    check-cast v0, Lcom/qihoo360/replugin/model/PluginInfo;

    .line 187
    :cond_3
    invoke-virtual {p0, v0}, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub;->uninstall(Lcom/qihoo360/replugin/model/PluginInfo;)Z

    move-result p1

    .line 188
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 189
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeInt(I)V

    return v1

    .line 161
    :pswitch_9
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 163
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p1

    .line 165
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p2

    if-eqz p2, :cond_4

    move p2, v1

    goto :goto_1

    :cond_4
    move p2, v3

    .line 166
    :goto_1
    invoke-virtual {p0, p1, p2}, Lcom/qihoo360/replugin/packages/IPluginManagerServer$Stub;->install(Ljava/lang/String;Z)Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object p1

    .line 167
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    if-eqz p1, :cond_5

    .line 169
    invoke-virtual {p3, v1}, Landroid/os/Parcel;->writeInt(I)V

    .line 170
    invoke-virtual {p1, p3, v1}, Lcom/qihoo360/replugin/model/PluginInfo;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_2

    .line 173
    :cond_5
    invoke-virtual {p3, v3}, Landroid/os/Parcel;->writeInt(I)V

    :goto_2
    return v1

    .line 156
    :cond_6
    invoke-virtual {p3, v2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    return v1

    :pswitch_data_0
    .packed-switch 0x1
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
