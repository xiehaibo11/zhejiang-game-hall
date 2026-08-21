.class final Lcom/tkay/china/common/a$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/content/ServiceConnection;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/china/common/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/china/common/a;


# direct methods
.method constructor <init>(Lcom/tkay/china/common/a;)V
    .locals 0

    .line 89
    iput-object p1, p0, Lcom/tkay/china/common/a$1;->a:Lcom/tkay/china/common/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onServiceConnected(Landroid/content/ComponentName;Landroid/os/IBinder;)V
    .locals 0

    .line 93
    sget-object p1, Lcom/tkay/china/common/a;->a:Ljava/lang/String;

    .line 95
    :try_start_0
    iget-object p1, p0, Lcom/tkay/china/common/a$1;->a:Lcom/tkay/china/common/a;

    check-cast p2, Lcom/tkay/china/common/service/ApkDownloadService$a;

    invoke-static {p1, p2}, Lcom/tkay/china/common/a;->a(Lcom/tkay/china/common/a;Lcom/tkay/china/common/service/ApkDownloadService$a;)Lcom/tkay/china/common/service/ApkDownloadService$a;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 97
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method public final onServiceDisconnected(Landroid/content/ComponentName;)V
    .locals 1

    .line 103
    sget-object p1, Lcom/tkay/china/common/a;->a:Ljava/lang/String;

    .line 104
    iget-object p1, p0, Lcom/tkay/china/common/a$1;->a:Lcom/tkay/china/common/a;

    const/4 v0, 0x0

    invoke-static {p1, v0}, Lcom/tkay/china/common/a;->a(Lcom/tkay/china/common/a;Lcom/tkay/china/common/service/ApkDownloadService$a;)Lcom/tkay/china/common/service/ApkDownloadService$a;

    return-void
.end method
