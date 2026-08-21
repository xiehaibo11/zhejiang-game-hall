.class public Lcom/igexin/b/a/c/a/f;
.super Landroid/os/Handler;


# instance fields
.field private final a:Ljava/lang/String;

.field private final b:Landroid/os/Messenger;

.field private final c:Ljava/lang/StringBuffer;

.field private d:Landroid/os/Messenger;


# direct methods
.method private constructor <init>()V
    .locals 2

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-direct {p0, v0}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "LOG-"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-class v1, Lcom/igexin/b/a/c/a/f;

    invoke-virtual {v1}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/igexin/b/a/c/a/f;->a:Ljava/lang/String;

    new-instance v0, Landroid/os/Messenger;

    invoke-direct {v0, p0}, Landroid/os/Messenger;-><init>(Landroid/os/Handler;)V

    iput-object v0, p0, Lcom/igexin/b/a/c/a/f;->b:Landroid/os/Messenger;

    new-instance v0, Ljava/lang/StringBuffer;

    invoke-direct {v0}, Ljava/lang/StringBuffer;-><init>()V

    iput-object v0, p0, Lcom/igexin/b/a/c/a/f;->c:Ljava/lang/StringBuffer;

    return-void
.end method

.method synthetic constructor <init>(Lcom/igexin/b/a/c/a/g;)V
    .locals 0

    invoke-direct {p0}, Lcom/igexin/b/a/c/a/f;-><init>()V

    return-void
.end method

.method public static a()Lcom/igexin/b/a/c/a/f;
    .locals 1

    invoke-static {}, Lcom/igexin/b/a/c/a/h;->a()Lcom/igexin/b/a/c/a/f;

    move-result-object v0

    return-object v0
.end method

.method private a(Landroid/os/Message;)V
    .locals 1

    iget-object p1, p1, Landroid/os/Message;->replyTo:Landroid/os/Messenger;

    iput-object p1, p0, Lcom/igexin/b/a/c/a/f;->d:Landroid/os/Messenger;

    invoke-direct {p0}, Lcom/igexin/b/a/c/a/f;->c()Z

    move-result p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/igexin/b/a/c/a/f;->c:Ljava/lang/StringBuffer;

    invoke-virtual {p1}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/igexin/b/a/c/a/f;->b(Ljava/lang/String;)V

    iget-object p1, p0, Lcom/igexin/b/a/c/a/f;->c:Ljava/lang/StringBuffer;

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuffer;->setLength(I)V

    :cond_0
    return-void
.end method

.method private b(Ljava/lang/String;)V
    .locals 3

    :try_start_0
    new-instance v0, Landroid/os/Message;

    invoke-direct {v0}, Landroid/os/Message;-><init>()V

    const/4 v1, 0x2

    iput v1, v0, Landroid/os/Message;->what:I

    new-instance v1, Landroid/os/Bundle;

    invoke-direct {v1}, Landroid/os/Bundle;-><init>()V

    const-string v2, "log_data"

    invoke-virtual {v1, v2, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    iget-object p1, p0, Lcom/igexin/b/a/c/a/f;->d:Landroid/os/Messenger;

    invoke-virtual {p1, v0}, Landroid/os/Messenger;->send(Landroid/os/Message;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    iget-object v0, p0, Lcom/igexin/b/a/c/a/f;->a:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "send message error = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :goto_0
    return-void
.end method

.method private c()Z
    .locals 1

    iget-object v0, p0, Lcom/igexin/b/a/c/a/f;->c:Ljava/lang/StringBuffer;

    invoke-virtual {v0}, Ljava/lang/StringBuffer;->length()I

    move-result v0

    if-lez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method


# virtual methods
.method public a(Ljava/lang/String;)V
    .locals 3

    sget-object v0, Lcom/igexin/push/core/x;->a:Landroid/content/Context;

    invoke-static {v0}, Lcom/igexin/push/util/a;->d(Landroid/content/Context;)Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    const/16 v0, 0x1400

    iget-object v1, p0, Lcom/igexin/b/a/c/a/f;->d:Landroid/os/Messenger;

    if-eqz v1, :cond_1

    invoke-direct {p0, p1}, Lcom/igexin/b/a/c/a/f;->b(Ljava/lang/String;)V

    goto :goto_0

    :cond_1
    iget-object v1, p0, Lcom/igexin/b/a/c/a/f;->c:Ljava/lang/StringBuffer;

    invoke-virtual {v1}, Ljava/lang/StringBuffer;->length()I

    move-result v1

    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v2

    add-int/2addr v1, v2

    const-string v2, "\n"

    if-ge v1, v0, :cond_2

    iget-object v0, p0, Lcom/igexin/b/a/c/a/f;->c:Ljava/lang/StringBuffer;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    goto :goto_0

    :cond_2
    iget-object p1, p0, Lcom/igexin/b/a/c/a/f;->c:Ljava/lang/StringBuffer;

    invoke-virtual {p1}, Ljava/lang/StringBuffer;->length()I

    move-result p1

    if-gt p1, v0, :cond_3

    iget-object p1, p0, Lcom/igexin/b/a/c/a/f;->c:Ljava/lang/StringBuffer;

    invoke-virtual {p1}, Ljava/lang/StringBuffer;->length()I

    move-result p1

    add-int/lit16 p1, p1, 0x87

    if-le p1, v0, :cond_3

    iget-object p1, p0, Lcom/igexin/b/a/c/a/f;->c:Ljava/lang/StringBuffer;

    const-string v0, "Warning! the log cache is too long to show the full content,we suggest you call initialize and setDebugLogger in a short time interval."

    invoke-virtual {p1, v0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-virtual {p1, v2}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    :cond_3
    :goto_0
    return-void
.end method

.method public b()Landroid/os/IBinder;
    .locals 1

    iget-object v0, p0, Lcom/igexin/b/a/c/a/f;->b:Landroid/os/Messenger;

    invoke-virtual {v0}, Landroid/os/Messenger;->getBinder()Landroid/os/IBinder;

    move-result-object v0

    return-object v0
.end method

.method public handleMessage(Landroid/os/Message;)V
    .locals 2

    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x1

    if-eq v0, v1, :cond_0

    invoke-super {p0, p1}, Landroid/os/Handler;->handleMessage(Landroid/os/Message;)V

    goto :goto_0

    :cond_0
    invoke-direct {p0, p1}, Lcom/igexin/b/a/c/a/f;->a(Landroid/os/Message;)V

    :goto_0
    return-void
.end method
