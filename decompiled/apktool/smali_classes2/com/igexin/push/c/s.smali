.class public Lcom/igexin/push/c/s;
.super Lcom/igexin/push/c/m;

# interfaces
.implements Lcom/igexin/push/c/p;


# static fields
.field private static e:Lcom/igexin/push/c/s;


# direct methods
.method private constructor <init>()V
    .locals 2

    sget-object v0, Lcom/igexin/push/core/d;->ag:Ljava/lang/String;

    sget-object v1, Lcom/igexin/push/core/d;->ai:Ljava/lang/String;

    invoke-direct {p0, v0, v1}, Lcom/igexin/push/c/m;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/igexin/push/c/s;->d:Lcom/igexin/push/c/a;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/igexin/push/c/a;->a(Z)V

    return-void
.end method

.method public static declared-synchronized a()Lcom/igexin/push/c/s;
    .locals 2

    const-class v0, Lcom/igexin/push/c/s;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/igexin/push/c/s;->e:Lcom/igexin/push/c/s;

    if-nez v1, :cond_0

    new-instance v1, Lcom/igexin/push/c/s;

    invoke-direct {v1}, Lcom/igexin/push/c/s;-><init>()V

    sput-object v1, Lcom/igexin/push/c/s;->e:Lcom/igexin/push/c/s;

    :cond_0
    sget-object v1, Lcom/igexin/push/c/s;->e:Lcom/igexin/push/c/s;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method


# virtual methods
.method public a(Lcom/igexin/push/c/g;Lcom/igexin/push/c/j;)V
    .locals 1

    if-eqz p2, :cond_2

    invoke-virtual {p2}, Lcom/igexin/push/c/j;->a()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {p2}, Lcom/igexin/push/c/j;->a()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/igexin/push/c/s;->a(Ljava/lang/String;)Lcom/igexin/push/c/q;

    move-result-object v0

    if-nez v0, :cond_1

    return-void

    :cond_1
    invoke-virtual {p0, p2}, Lcom/igexin/push/c/s;->b(Lcom/igexin/push/c/j;)V

    invoke-virtual {v0}, Lcom/igexin/push/c/q;->d()V

    invoke-virtual {p0}, Lcom/igexin/push/c/s;->m()V

    sget-object p2, Lcom/igexin/push/c/g;->a:Lcom/igexin/push/c/g;

    if-ne p1, p2, :cond_2

    invoke-virtual {p0}, Lcom/igexin/push/c/s;->l()V

    :cond_2
    :goto_0
    return-void
.end method

.method public a(Lcom/igexin/push/c/j;)V
    .locals 0

    return-void
.end method

.method public b()Lcom/igexin/push/c/h;
    .locals 1

    sget-object v0, Lcom/igexin/push/c/h;->a:Lcom/igexin/push/c/h;

    return-object v0
.end method

.method public c()Lcom/igexin/push/c/p;
    .locals 0

    return-object p0
.end method
