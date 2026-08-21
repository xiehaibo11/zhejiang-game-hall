.class public Lcom/czhj/devicehelper/oaId/helpers/i;
.super Ljava/lang/Object;


# instance fields
.field a:Ljava/lang/String;

.field private b:Landroid/content/Context;

.field private c:Landroid/os/HandlerThread;

.field private d:Landroid/os/Handler;

.field private e:Z


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/czhj/devicehelper/oaId/helpers/i;->e:Z

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/czhj/devicehelper/oaId/helpers/i;->a:Ljava/lang/String;

    iput-object p1, p0, Lcom/czhj/devicehelper/oaId/helpers/i;->b:Landroid/content/Context;

    return-void
.end method

.method static synthetic a(Lcom/czhj/devicehelper/oaId/helpers/i;ILjava/lang/String;)Ljava/lang/String;
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/czhj/devicehelper/oaId/helpers/i;->b(ILjava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 7

    :try_start_0
    const-string v0, "android.os.SystemProperties"

    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const-string v1, "get"

    const/4 v2, 0x2

    new-array v3, v2, [Ljava/lang/Class;

    const-class v4, Ljava/lang/String;

    const/4 v5, 0x0

    aput-object v4, v3, v5

    const-class v4, Ljava/lang/String;

    const/4 v6, 0x1

    aput-object v4, v3, v6

    invoke-virtual {v0, v1, v3}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    new-array v2, v2, [Ljava/lang/Object;

    aput-object p1, v2, v5

    aput-object p2, v2, v6

    invoke-virtual {v1, v0, v2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    return-object p2
.end method

.method private a(ILjava/lang/String;)V
    .locals 4

    iget-object v0, p0, Lcom/czhj/devicehelper/oaId/helpers/i;->d:Landroid/os/Handler;

    invoke-virtual {v0}, Landroid/os/Handler;->obtainMessage()Landroid/os/Message;

    move-result-object v0

    const/16 v1, 0xb

    iput v1, v0, Landroid/os/Message;->what:I

    new-instance v1, Landroid/os/Bundle;

    invoke-direct {v1}, Landroid/os/Bundle;-><init>()V

    const-string v2, "type"

    const/4 v3, 0x0

    invoke-virtual {v1, v2, v3}, Landroid/os/Bundle;->putInt(Ljava/lang/String;I)V

    const/4 v2, 0x1

    if-eq p1, v2, :cond_0

    const/4 v2, 0x2

    if-ne p1, v2, :cond_1

    :cond_0
    const-string p1, "appid"

    invoke-virtual {v1, p1, p2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    invoke-virtual {v0, v1}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    iget-object p1, p0, Lcom/czhj/devicehelper/oaId/helpers/i;->d:Landroid/os/Handler;

    invoke-virtual {p1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method

.method private b(ILjava/lang/String;)Ljava/lang/String;
    .locals 6

    const/4 p2, 0x0

    if-eqz p1, :cond_0

    move-object v1, p2

    goto :goto_0

    :cond_0
    const-string p1, "content://com.vivo.vms.IdProvider/IdentifierId/OAID"

    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p1

    move-object v1, p1

    :goto_0
    iget-object p1, p0, Lcom/czhj/devicehelper/oaId/helpers/i;->b:Landroid/content/Context;

    invoke-virtual {p1}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v0

    const/4 v2, 0x0

    const/4 v3, 0x0

    const/4 v4, 0x0

    const/4 v5, 0x0

    invoke-virtual/range {v0 .. v5}, Landroid/content/ContentResolver;->query(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object p1

    if-eqz p1, :cond_2

    invoke-interface {p1}, Landroid/database/Cursor;->moveToNext()Z

    move-result v0

    if-eqz v0, :cond_1

    const-string p2, "value"

    invoke-interface {p1, p2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result p2

    invoke-interface {p1, p2}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object p2

    :cond_1
    invoke-interface {p1}, Landroid/database/Cursor;->close()V

    :cond_2
    return-object p2
.end method

.method private c()Z
    .locals 2

    const-string v0, "persist.sys.identifierid.supported"

    const-string v1, "0"

    invoke-direct {p0, v0, v1}, Lcom/czhj/devicehelper/oaId/helpers/i;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "1"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/czhj/devicehelper/oaId/helpers/i;->e:Z

    return v0
.end method

.method private d()V
    .locals 2

    new-instance v0, Landroid/os/HandlerThread;

    const-string v1, "SqlWorkThread"

    invoke-direct {v0, v1}, Landroid/os/HandlerThread;-><init>(Ljava/lang/String;)V

    iput-object v0, p0, Lcom/czhj/devicehelper/oaId/helpers/i;->c:Landroid/os/HandlerThread;

    invoke-virtual {v0}, Landroid/os/HandlerThread;->start()V

    new-instance v0, Lcom/czhj/devicehelper/oaId/helpers/i$1;

    iget-object v1, p0, Lcom/czhj/devicehelper/oaId/helpers/i;->c:Landroid/os/HandlerThread;

    invoke-virtual {v1}, Landroid/os/HandlerThread;->getLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, p0, v1}, Lcom/czhj/devicehelper/oaId/helpers/i$1;-><init>(Lcom/czhj/devicehelper/oaId/helpers/i;Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/czhj/devicehelper/oaId/helpers/i;->d:Landroid/os/Handler;

    return-void
.end method


# virtual methods
.method public a()Ljava/lang/String;
    .locals 7

    const-string v0, "content://com.vivo.vms.IdProvider/IdentifierId/OAID"

    invoke-static {v0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v2

    iget-object v0, p0, Lcom/czhj/devicehelper/oaId/helpers/i;->b:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v1

    const/4 v3, 0x0

    const/4 v4, 0x0

    const/4 v5, 0x0

    const/4 v6, 0x0

    invoke-virtual/range {v1 .. v6}, Landroid/content/ContentResolver;->query(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v0

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    invoke-interface {v0}, Landroid/database/Cursor;->moveToNext()Z

    move-result v2

    if-eqz v2, :cond_0

    const-string v1, "value"

    invoke-interface {v0, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {v0, v1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v1

    :cond_0
    invoke-interface {v0}, Landroid/database/Cursor;->close()V

    :cond_1
    return-object v1
.end method

.method public b()Ljava/lang/String;
    .locals 2

    invoke-direct {p0}, Lcom/czhj/devicehelper/oaId/helpers/i;->d()V

    iget-boolean v0, p0, Lcom/czhj/devicehelper/oaId/helpers/i;->e:Z

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return-object v1

    :cond_0
    iget-object v0, p0, Lcom/czhj/devicehelper/oaId/helpers/i;->a:Ljava/lang/String;

    if-eqz v0, :cond_1

    return-object v1

    :cond_1
    const/4 v0, 0x0

    invoke-direct {p0, v0, v1}, Lcom/czhj/devicehelper/oaId/helpers/i;->a(ILjava/lang/String;)V

    return-object v1
.end method
