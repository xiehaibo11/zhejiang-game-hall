.class public final Lcom/tkay/china/a/a/d;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/china/a/a/d$a;
    }
.end annotation


# static fields
.field private static final a:Ljava/lang/String; = "OaidAidlUtil"

.field private static final b:Ljava/lang/String; = "com.huawei.hwid"

.field private static final c:Ljava/lang/String; = "com.uodis.opendevice.OPENIDS_SERVICE"


# instance fields
.field private d:Landroid/content/Context;

.field private e:Landroid/content/ServiceConnection;

.field private f:Lcom/tkay/china/a/a/c;

.field private g:Lcom/tkay/china/a/a;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 30
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 31
    iput-object p1, p0, Lcom/tkay/china/a/a/d;->d:Landroid/content/Context;

    return-void
.end method

.method static synthetic a(Lcom/tkay/china/a/a/d;)Lcom/tkay/china/a/a/c;
    .locals 0

    .line 21
    iget-object p0, p0, Lcom/tkay/china/a/a/d;->f:Lcom/tkay/china/a/a/c;

    return-object p0
.end method

.method static synthetic a(Lcom/tkay/china/a/a/d;Lcom/tkay/china/a/a/c;)Lcom/tkay/china/a/a/c;
    .locals 0

    .line 21
    iput-object p1, p0, Lcom/tkay/china/a/a/d;->f:Lcom/tkay/china/a/a/c;

    return-object p1
.end method

.method private a()Z
    .locals 4

    .line 36
    iget-object v0, p0, Lcom/tkay/china/a/a/d;->d:Landroid/content/Context;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    .line 40
    :cond_0
    new-instance v0, Lcom/tkay/china/a/a/d$a;

    invoke-direct {v0, p0, v1}, Lcom/tkay/china/a/a/d$a;-><init>(Lcom/tkay/china/a/a/d;B)V

    iput-object v0, p0, Lcom/tkay/china/a/a/d;->e:Landroid/content/ServiceConnection;

    .line 41
    new-instance v0, Landroid/content/Intent;

    const-string v1, "com.uodis.opendevice.OPENIDS_SERVICE"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    const-string v1, "com.huawei.hwid"

    .line 42
    invoke-virtual {v0, v1}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    .line 43
    iget-object v1, p0, Lcom/tkay/china/a/a/d;->d:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/china/a/a/d;->e:Landroid/content/ServiceConnection;

    const/4 v3, 0x1

    invoke-virtual {v1, v0, v2, v3}, Landroid/content/Context;->bindService(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z

    move-result v0

    return v0
.end method

.method static synthetic b(Lcom/tkay/china/a/a/d;)Lcom/tkay/china/a/a;
    .locals 0

    .line 21
    iget-object p0, p0, Lcom/tkay/china/a/a/d;->g:Lcom/tkay/china/a/a;

    return-object p0
.end method

.method private b()V
    .locals 2

    .line 50
    iget-object v0, p0, Lcom/tkay/china/a/a/d;->d:Landroid/content/Context;

    if-nez v0, :cond_0

    return-void

    .line 54
    :cond_0
    iget-object v1, p0, Lcom/tkay/china/a/a/d;->e:Landroid/content/ServiceConnection;

    if-eqz v1, :cond_1

    .line 56
    :try_start_0
    invoke-virtual {v0, v1}, Landroid/content/Context;->unbindService(Landroid/content/ServiceConnection;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    const/4 v0, 0x0

    .line 60
    iput-object v0, p0, Lcom/tkay/china/a/a/d;->f:Lcom/tkay/china/a/a/c;

    .line 61
    iput-object v0, p0, Lcom/tkay/china/a/a/d;->d:Landroid/content/Context;

    .line 62
    iput-object v0, p0, Lcom/tkay/china/a/a/d;->g:Lcom/tkay/china/a/a;

    :cond_1
    return-void
.end method

.method static synthetic c(Lcom/tkay/china/a/a/d;)V
    .locals 2

    .line 1050
    iget-object v0, p0, Lcom/tkay/china/a/a/d;->d:Landroid/content/Context;

    if-nez v0, :cond_0

    return-void

    .line 1054
    :cond_0
    iget-object v1, p0, Lcom/tkay/china/a/a/d;->e:Landroid/content/ServiceConnection;

    if-eqz v1, :cond_1

    .line 1056
    :try_start_0
    invoke-virtual {v0, v1}, Landroid/content/Context;->unbindService(Landroid/content/ServiceConnection;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    const/4 v0, 0x0

    .line 1060
    iput-object v0, p0, Lcom/tkay/china/a/a/d;->f:Lcom/tkay/china/a/a/c;

    .line 1061
    iput-object v0, p0, Lcom/tkay/china/a/a/d;->d:Landroid/content/Context;

    .line 1062
    iput-object v0, p0, Lcom/tkay/china/a/a/d;->g:Lcom/tkay/china/a/a;

    :cond_1
    return-void
.end method


# virtual methods
.method public final a(Lcom/tkay/china/a/a;)V
    .locals 3

    .line 71
    iput-object p1, p0, Lcom/tkay/china/a/a/d;->g:Lcom/tkay/china/a/a;

    .line 1036
    iget-object p1, p0, Lcom/tkay/china/a/a/d;->d:Landroid/content/Context;

    if-eqz p1, :cond_0

    .line 1040
    new-instance p1, Lcom/tkay/china/a/a/d$a;

    const/4 v0, 0x0

    invoke-direct {p1, p0, v0}, Lcom/tkay/china/a/a/d$a;-><init>(Lcom/tkay/china/a/a/d;B)V

    iput-object p1, p0, Lcom/tkay/china/a/a/d;->e:Landroid/content/ServiceConnection;

    .line 1041
    new-instance p1, Landroid/content/Intent;

    const-string v0, "com.uodis.opendevice.OPENIDS_SERVICE"

    invoke-direct {p1, v0}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    const-string v0, "com.huawei.hwid"

    .line 1042
    invoke-virtual {p1, v0}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    .line 1043
    iget-object v0, p0, Lcom/tkay/china/a/a/d;->d:Landroid/content/Context;

    iget-object v1, p0, Lcom/tkay/china/a/a/d;->e:Landroid/content/ServiceConnection;

    const/4 v2, 0x1

    invoke-virtual {v0, p1, v1, v2}, Landroid/content/Context;->bindService(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z

    :cond_0
    return-void
.end method
