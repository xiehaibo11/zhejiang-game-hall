.class Lcom/igexin/push/core/a/g;
.super Lcom/igexin/push/f/b;


# instance fields
.field final synthetic a:Lcom/igexin/push/core/a/e;


# direct methods
.method constructor <init>(Lcom/igexin/push/core/a/e;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/push/core/a/g;->a:Lcom/igexin/push/core/a/e;

    invoke-direct {p0}, Lcom/igexin/push/f/b;-><init>()V

    return-void
.end method


# virtual methods
.method protected a()V
    .locals 12

    :try_start_0
    new-instance v0, Lcom/igexin/push/core/bean/a;

    invoke-direct {v0}, Lcom/igexin/push/core/bean/a;-><init>()V

    iget-wide v8, v0, Lcom/igexin/push/core/bean/a;->n:J

    invoke-static {v0}, Lcom/igexin/push/core/bean/a;->a(Lcom/igexin/push/core/bean/a;)Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "addphoneinfo| "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    new-array v2, v2, [Ljava/lang/Object;

    invoke-static {v1, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-static {}, Lcom/igexin/push/core/b/e;->a()Lcom/igexin/push/core/b/e;

    move-result-object v10

    new-instance v11, Lcom/igexin/push/core/bean/h;

    const/4 v5, 0x5

    move-object v1, v11

    move-wide v2, v8

    move-object v4, v0

    move-wide v6, v8

    invoke-direct/range {v1 .. v7}, Lcom/igexin/push/core/bean/h;-><init>(JLjava/lang/String;BJ)V

    invoke-virtual {v10, v11}, Lcom/igexin/push/core/b/e;->a(Lcom/igexin/push/core/bean/h;)V

    new-instance v1, Lcom/igexin/push/d/c/b;

    invoke-direct {v1}, Lcom/igexin/push/d/c/b;-><init>()V

    invoke-virtual {v1}, Lcom/igexin/push/d/c/b;->b()V

    long-to-int v2, v8

    iput v2, v1, Lcom/igexin/push/d/c/b;->a:I

    const-string v2, "17258000"

    iput-object v2, v1, Lcom/igexin/push/d/c/b;->d:Ljava/lang/String;

    iput-object v0, v1, Lcom/igexin/push/d/c/b;->e:Ljava/lang/Object;

    sget-object v0, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    iput-object v0, v1, Lcom/igexin/push/d/c/b;->g:Ljava/lang/String;

    invoke-static {}, Lcom/igexin/push/core/c;->a()Lcom/igexin/push/core/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/core/c;->i()Lcom/igexin/push/e/a;

    move-result-object v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "C-"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v3, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2, v1}, Lcom/igexin/push/e/a;->a(Ljava/lang/String;Lcom/igexin/push/d/c/c;)I

    sget-object v0, Lcom/igexin/push/core/d;->C:Ljava/lang/String;

    sget-object v1, Lcom/igexin/push/core/d;->B:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/igexin/b/b/a;->a(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    invoke-static {}, Lcom/igexin/push/core/b/i;->a()Lcom/igexin/push/core/b/i;

    move-result-object v0

    sget-object v1, Lcom/igexin/push/core/d;->B:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/igexin/push/core/b/i;->d(Ljava/lang/String;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method
