.class public Lcom/qihoo360/loader2/BinderCursor;
.super Landroid/database/MatrixCursor;
.source "BinderCursor.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/qihoo360/loader2/BinderCursor$BinderParcelable;
    }
.end annotation


# static fields
.field static final BINDER_KEY:Ljava/lang/String; = "binder"


# instance fields
.field mBinderExtra:Landroid/os/Bundle;


# direct methods
.method public constructor <init>([Ljava/lang/String;Landroid/os/IBinder;)V
    .locals 1

    .line 81
    invoke-direct {p0, p1}, Landroid/database/MatrixCursor;-><init>([Ljava/lang/String;)V

    .line 39
    new-instance p1, Landroid/os/Bundle;

    invoke-direct {p1}, Landroid/os/Bundle;-><init>()V

    iput-object p1, p0, Lcom/qihoo360/loader2/BinderCursor;->mBinderExtra:Landroid/os/Bundle;

    if-eqz p2, :cond_0

    .line 84
    new-instance p1, Lcom/qihoo360/loader2/BinderCursor$BinderParcelable;

    invoke-direct {p1, p2}, Lcom/qihoo360/loader2/BinderCursor$BinderParcelable;-><init>(Landroid/os/IBinder;)V

    .line 85
    iget-object p2, p0, Lcom/qihoo360/loader2/BinderCursor;->mBinderExtra:Landroid/os/Bundle;

    const-string v0, "binder"

    invoke-virtual {p2, v0, p1}, Landroid/os/Bundle;->putParcelable(Ljava/lang/String;Landroid/os/Parcelable;)V

    :cond_0
    return-void
.end method

.method public static final getBinder(Landroid/database/Cursor;)Landroid/os/IBinder;
    .locals 2

    .line 102
    invoke-interface {p0}, Landroid/database/Cursor;->getExtras()Landroid/os/Bundle;

    move-result-object p0

    .line 103
    const-class v0, Lcom/qihoo360/loader2/BinderCursor;

    invoke-virtual {v0}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v0

    invoke-virtual {p0, v0}, Landroid/os/Bundle;->setClassLoader(Ljava/lang/ClassLoader;)V

    const-string v0, "binder"

    .line 104
    invoke-virtual {p0, v0}, Landroid/os/Bundle;->getParcelable(Ljava/lang/String;)Landroid/os/Parcelable;

    move-result-object p0

    check-cast p0, Lcom/qihoo360/loader2/BinderCursor$BinderParcelable;

    .line 105
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 106
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "get binder = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/qihoo360/loader2/BinderCursor$BinderParcelable;->mBinder:Landroid/os/IBinder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ws001"

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 108
    :cond_0
    iget-object p0, p0, Lcom/qihoo360/loader2/BinderCursor$BinderParcelable;->mBinder:Landroid/os/IBinder;

    return-object p0
.end method

.method public static final queryBinder(Landroid/os/IBinder;)Landroid/database/Cursor;
    .locals 2

    .line 95
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 96
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "query binder = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ws001"

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 98
    :cond_0
    new-instance v0, Lcom/qihoo360/loader2/BinderCursor;

    sget-object v1, Lcom/qihoo360/replugin/model/PluginInfo;->QUERY_COLUMNS:[Ljava/lang/String;

    invoke-direct {v0, v1, p0}, Lcom/qihoo360/loader2/BinderCursor;-><init>([Ljava/lang/String;Landroid/os/IBinder;)V

    return-object v0
.end method


# virtual methods
.method public getExtras()Landroid/os/Bundle;
    .locals 1

    .line 91
    iget-object v0, p0, Lcom/qihoo360/loader2/BinderCursor;->mBinderExtra:Landroid/os/Bundle;

    return-object v0
.end method
