.class public abstract Lcom/qihoo360/loader2/IPluginClient$Stub;
.super Landroid/os/Binder;
.source "IPluginClient.java"

# interfaces
.implements Lcom/qihoo360/loader2/IPluginClient;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/qihoo360/loader2/IPluginClient;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x409
    name = "Stub"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/qihoo360/loader2/IPluginClient$Stub$Proxy;
    }
.end annotation


# static fields
.field private static final DESCRIPTOR:Ljava/lang/String; = "com.qihoo360.loader2.IPluginClient"

.field static final TRANSACTION_allocActivityContainer:I = 0x1

.field static final TRANSACTION_dumpActivities:I = 0xa

.field static final TRANSACTION_dumpServices:I = 0x9

.field static final TRANSACTION_fetchServiceServer:I = 0x7

.field static final TRANSACTION_onReceive:I = 0x8

.field static final TRANSACTION_queryBinder:I = 0x2

.field static final TRANSACTION_releaseBinder:I = 0x3

.field static final TRANSACTION_sendIntent:I = 0x4

.field static final TRANSACTION_sendIntentSync:I = 0x5

.field static final TRANSACTION_sumActivities:I = 0x6


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 77
    invoke-direct {p0}, Landroid/os/Binder;-><init>()V

    const-string v0, "com.qihoo360.loader2.IPluginClient"

    .line 78
    invoke-virtual {p0, p0, v0}, Lcom/qihoo360/loader2/IPluginClient$Stub;->attachInterface(Landroid/os/IInterface;Ljava/lang/String;)V

    return-void
.end method

.method public static asInterface(Landroid/os/IBinder;)Lcom/qihoo360/loader2/IPluginClient;
    .locals 2

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    :cond_0
    const-string v0, "com.qihoo360.loader2.IPluginClient"

    .line 89
    invoke-interface {p0, v0}, Landroid/os/IBinder;->queryLocalInterface(Ljava/lang/String;)Landroid/os/IInterface;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 90
    instance-of v1, v0, Lcom/qihoo360/loader2/IPluginClient;

    if-eqz v1, :cond_1

    .line 91
    check-cast v0, Lcom/qihoo360/loader2/IPluginClient;

    return-object v0

    .line 93
    :cond_1
    new-instance v0, Lcom/qihoo360/loader2/IPluginClient$Stub$Proxy;

    invoke-direct {v0, p0}, Lcom/qihoo360/loader2/IPluginClient$Stub$Proxy;-><init>(Landroid/os/IBinder;)V

    return-object v0
.end method

.method public static getDefaultImpl()Lcom/qihoo360/loader2/IPluginClient;
    .locals 1

    .line 514
    sget-object v0, Lcom/qihoo360/loader2/IPluginClient$Stub$Proxy;->sDefaultImpl:Lcom/qihoo360/loader2/IPluginClient;

    return-object v0
.end method

.method public static setDefaultImpl(Lcom/qihoo360/loader2/IPluginClient;)Z
    .locals 1

    .line 504
    sget-object v0, Lcom/qihoo360/loader2/IPluginClient$Stub$Proxy;->sDefaultImpl:Lcom/qihoo360/loader2/IPluginClient;

    if-nez v0, :cond_1

    if-eqz p0, :cond_0

    .line 508
    sput-object p0, Lcom/qihoo360/loader2/IPluginClient$Stub$Proxy;->sDefaultImpl:Lcom/qihoo360/loader2/IPluginClient;

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0

    .line 505
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

    const-string v2, "com.qihoo360.loader2.IPluginClient"

    if-eq p1, v0, :cond_5

    const/4 v0, 0x0

    packed-switch p1, :pswitch_data_0

    .line 228
    invoke-super {p0, p1, p2, p3, p4}, Landroid/os/Binder;->onTransact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result p1

    return p1

    .line 220
    :pswitch_0
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 221
    invoke-virtual {p0}, Lcom/qihoo360/loader2/IPluginClient$Stub;->dumpActivities()Ljava/lang/String;

    move-result-object p1

    .line 222
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 223
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    return v1

    .line 212
    :pswitch_1
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 213
    invoke-virtual {p0}, Lcom/qihoo360/loader2/IPluginClient$Stub;->dumpServices()Ljava/lang/String;

    move-result-object p1

    .line 214
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 215
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    return v1

    .line 194
    :pswitch_2
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 196
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p1

    .line 198
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p4

    .line 200
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result v2

    if-eqz v2, :cond_0

    .line 201
    sget-object v0, Landroid/content/Intent;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {v0, p2}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p2

    move-object v0, p2

    check-cast v0, Landroid/content/Intent;

    .line 206
    :cond_0
    invoke-virtual {p0, p1, p4, v0}, Lcom/qihoo360/loader2/IPluginClient$Stub;->onReceive(Ljava/lang/String;Ljava/lang/String;Landroid/content/Intent;)V

    .line 207
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v1

    .line 186
    :pswitch_3
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 187
    invoke-virtual {p0}, Lcom/qihoo360/loader2/IPluginClient$Stub;->fetchServiceServer()Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;

    move-result-object p1

    .line 188
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    if-eqz p1, :cond_1

    .line 189
    invoke-interface {p1}, Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;->asBinder()Landroid/os/IBinder;

    move-result-object v0

    :cond_1
    invoke-virtual {p3, v0}, Landroid/os/Parcel;->writeStrongBinder(Landroid/os/IBinder;)V

    return v1

    .line 178
    :pswitch_4
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 179
    invoke-virtual {p0}, Lcom/qihoo360/loader2/IPluginClient$Stub;->sumActivities()I

    move-result p1

    .line 180
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 181
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeInt(I)V

    return v1

    .line 164
    :pswitch_5
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 166
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    if-eqz p1, :cond_2

    .line 167
    sget-object p1, Landroid/content/Intent;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {p1, p2}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p1

    move-object v0, p1

    check-cast v0, Landroid/content/Intent;

    .line 172
    :cond_2
    invoke-virtual {p0, v0}, Lcom/qihoo360/loader2/IPluginClient$Stub;->sendIntentSync(Landroid/content/Intent;)V

    .line 173
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v1

    .line 151
    :pswitch_6
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 153
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    if-eqz p1, :cond_3

    .line 154
    sget-object p1, Landroid/content/Intent;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {p1, p2}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p1

    move-object v0, p1

    check-cast v0, Landroid/content/Intent;

    .line 159
    :cond_3
    invoke-virtual {p0, v0}, Lcom/qihoo360/loader2/IPluginClient$Stub;->sendIntent(Landroid/content/Intent;)V

    return v1

    .line 144
    :pswitch_7
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 145
    invoke-virtual {p0}, Lcom/qihoo360/loader2/IPluginClient$Stub;->releaseBinder()V

    .line 146
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v1

    .line 132
    :pswitch_8
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 134
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p1

    .line 136
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p2

    .line 137
    invoke-virtual {p0, p1, p2}, Lcom/qihoo360/loader2/IPluginClient$Stub;->queryBinder(Ljava/lang/String;Ljava/lang/String;)Landroid/os/IBinder;

    move-result-object p1

    .line 138
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 139
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeStrongBinder(Landroid/os/IBinder;)V

    return v1

    .line 111
    :pswitch_9
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 113
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p1

    .line 115
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p4

    .line 117
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v2

    .line 119
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result v3

    if-eqz v3, :cond_4

    .line 120
    sget-object v0, Landroid/content/Intent;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {v0, p2}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p2

    move-object v0, p2

    check-cast v0, Landroid/content/Intent;

    .line 125
    :cond_4
    invoke-virtual {p0, p1, p4, v2, v0}, Lcom/qihoo360/loader2/IPluginClient$Stub;->allocActivityContainer(Ljava/lang/String;ILjava/lang/String;Landroid/content/Intent;)Ljava/lang/String;

    move-result-object p1

    .line 126
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 127
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    return v1

    .line 106
    :cond_5
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
