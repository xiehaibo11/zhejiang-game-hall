.class public final Lcom/mbridge/msdk/optimize/a/a;
.super Ljava/lang/Object;
.source "OaidAidlUtil.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/optimize/a/a$a;
    }
.end annotation


# instance fields
.field private a:Landroid/content/Context;

.field private b:Landroid/content/ServiceConnection;

.field private c:Lcom/mbridge/msdk/optimize/a/c;

.field private d:Lcom/mbridge/msdk/optimize/a/b;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 19
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 20
    iput-object p1, p0, Lcom/mbridge/msdk/optimize/a/a;->a:Landroid/content/Context;

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/optimize/a/a;)Lcom/mbridge/msdk/optimize/a/c;
    .locals 0

    .line 10
    iget-object p0, p0, Lcom/mbridge/msdk/optimize/a/a;->c:Lcom/mbridge/msdk/optimize/a/c;

    return-object p0
.end method

.method static synthetic a(Lcom/mbridge/msdk/optimize/a/a;Lcom/mbridge/msdk/optimize/a/c;)Lcom/mbridge/msdk/optimize/a/c;
    .locals 0

    .line 10
    iput-object p1, p0, Lcom/mbridge/msdk/optimize/a/a;->c:Lcom/mbridge/msdk/optimize/a/c;

    return-object p1
.end method

.method static synthetic b(Lcom/mbridge/msdk/optimize/a/a;)Lcom/mbridge/msdk/optimize/a/b;
    .locals 0

    .line 10
    iget-object p0, p0, Lcom/mbridge/msdk/optimize/a/a;->d:Lcom/mbridge/msdk/optimize/a/b;

    return-object p0
.end method

.method static synthetic c(Lcom/mbridge/msdk/optimize/a/a;)V
    .locals 2

    .line 1035
    iget-object v0, p0, Lcom/mbridge/msdk/optimize/a/a;->a:Landroid/content/Context;

    if-nez v0, :cond_0

    goto :goto_0

    .line 1038
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/optimize/a/a;->b:Landroid/content/ServiceConnection;

    if-eqz v1, :cond_1

    .line 1039
    invoke-virtual {v0, v1}, Landroid/content/Context;->unbindService(Landroid/content/ServiceConnection;)V

    const/4 v0, 0x0

    .line 1040
    iput-object v0, p0, Lcom/mbridge/msdk/optimize/a/a;->c:Lcom/mbridge/msdk/optimize/a/c;

    .line 1041
    iput-object v0, p0, Lcom/mbridge/msdk/optimize/a/a;->a:Landroid/content/Context;

    .line 1042
    iput-object v0, p0, Lcom/mbridge/msdk/optimize/a/a;->d:Lcom/mbridge/msdk/optimize/a/b;

    :cond_1
    :goto_0
    return-void
.end method


# virtual methods
.method public final a(Lcom/mbridge/msdk/optimize/a/b;)V
    .locals 3

    if-nez p1, :cond_0

    return-void

    .line 51
    :cond_0
    :try_start_0
    iput-object p1, p0, Lcom/mbridge/msdk/optimize/a/a;->d:Lcom/mbridge/msdk/optimize/a/b;

    .line 1024
    iget-object p1, p0, Lcom/mbridge/msdk/optimize/a/a;->a:Landroid/content/Context;

    if-nez p1, :cond_1

    goto :goto_0

    .line 1027
    :cond_1
    new-instance p1, Lcom/mbridge/msdk/optimize/a/a$a;

    const/4 v0, 0x0

    invoke-direct {p1, p0, v0}, Lcom/mbridge/msdk/optimize/a/a$a;-><init>(Lcom/mbridge/msdk/optimize/a/a;Lcom/mbridge/msdk/optimize/a/a$1;)V

    iput-object p1, p0, Lcom/mbridge/msdk/optimize/a/a;->b:Landroid/content/ServiceConnection;

    .line 1028
    new-instance p1, Landroid/content/Intent;

    const-string v0, "com.uodis.opendevice.OPENIDS_SERVICE"

    invoke-direct {p1, v0}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    const-string v0, "com.huawei.hwid"

    .line 1029
    invoke-virtual {p1, v0}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    .line 1030
    iget-object v0, p0, Lcom/mbridge/msdk/optimize/a/a;->a:Landroid/content/Context;

    iget-object v1, p0, Lcom/mbridge/msdk/optimize/a/a;->b:Landroid/content/ServiceConnection;

    const/4 v2, 0x1

    invoke-virtual {v0, p1, v1, v2}, Landroid/content/Context;->bindService(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :goto_0
    return-void
.end method
