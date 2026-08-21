.class final Lcom/tkay/china/common/a$2;
.super Landroid/content/BroadcastReceiver;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/china/common/a;-><init>(Landroid/content/Context;)V
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

    .line 126
    iput-object p1, p0, Lcom/tkay/china/common/a$2;->a:Lcom/tkay/china/common/a;

    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method


# virtual methods
.method public final onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 1

    :try_start_0
    const-string p2, "connectivity"

    .line 130
    invoke-virtual {p1, p2}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Landroid/net/ConnectivityManager;

    if-eqz p2, :cond_0

    const-string v0, "android.permission.ACCESS_NETWORK_STATE"

    .line 131
    invoke-static {v0, p1}, Lcom/tkay/core/common/l/h;->a(Ljava/lang/String;Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 132
    invoke-virtual {p2}, Landroid/net/ConnectivityManager;->getActiveNetworkInfo()Landroid/net/NetworkInfo;

    move-result-object p2

    .line 133
    invoke-static {p1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;)Z

    move-result p1

    if-eqz p1, :cond_0

    invoke-virtual {p2}, Landroid/net/NetworkInfo;->getType()I

    move-result p1

    const/4 p2, 0x1

    if-ne p1, p2, :cond_0

    .line 134
    iget-object p1, p0, Lcom/tkay/china/common/a$2;->a:Lcom/tkay/china/common/a;

    invoke-static {p1}, Lcom/tkay/china/common/a;->a(Lcom/tkay/china/common/a;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception p1

    .line 139
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method
