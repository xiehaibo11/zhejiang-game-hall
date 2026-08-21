.class public abstract Lcom/mbridge/msdk/optimize/a/b/b$a;
.super Landroid/os/Binder;
.source "LenovoIDInterface.java"

# interfaces
.implements Lcom/mbridge/msdk/optimize/a/b/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/optimize/a/b/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x409
    name = "a"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/optimize/a/b/b$a$a;
    }
.end annotation


# virtual methods
.method protected onTransact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    const/4 v0, 0x1

    const-string v1, "com.zui.deviceidservice.IDeviceidInterface"

    if-eq p1, v0, :cond_5

    const/4 v2, 0x2

    if-eq p1, v2, :cond_4

    const/4 v2, 0x3

    if-eq p1, v2, :cond_3

    const/4 v2, 0x4

    if-eq p1, v2, :cond_2

    const/4 v2, 0x5

    if-eq p1, v2, :cond_1

    const v2, 0x5f4e5446

    if-eq p1, v2, :cond_0

    .line 184
    invoke-super {p0, p1, p2, p3, p4}, Landroid/os/Binder;->onTransact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result p1

    return p1

    .line 181
    :cond_0
    invoke-virtual {p3, v1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    return v0

    .line 175
    :cond_1
    invoke-virtual {p2, v1}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 176
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/optimize/a/b/b$a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 177
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 178
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    return v0

    .line 169
    :cond_2
    invoke-virtual {p2, v1}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 170
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/optimize/a/b/b$a;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 171
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 172
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    return v0

    .line 163
    :cond_3
    invoke-virtual {p2, v1}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 164
    invoke-virtual {p0}, Lcom/mbridge/msdk/optimize/a/b/b$a;->c()Z

    move-result p1

    .line 165
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 166
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeInt(I)V

    return v0

    .line 157
    :cond_4
    invoke-virtual {p2, v1}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 158
    invoke-virtual {p0}, Lcom/mbridge/msdk/optimize/a/b/b$a;->b()Ljava/lang/String;

    move-result-object p1

    .line 159
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 160
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    return v0

    .line 151
    :cond_5
    invoke-virtual {p2, v1}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 152
    invoke-virtual {p0}, Lcom/mbridge/msdk/optimize/a/b/b$a;->a()Ljava/lang/String;

    move-result-object p1

    .line 153
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 154
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    return v0
.end method
