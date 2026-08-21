.class public Lcom/xiaomi/push/iy;
.super Ljava/lang/Object;


# instance fields
.field private final a:Lcom/xiaomi/push/jf;

.field private final a:Lcom/xiaomi/push/jo;


# direct methods
.method public constructor <init>()V
    .locals 1

    new-instance v0, Lcom/xiaomi/push/jb$a;

    invoke-direct {v0}, Lcom/xiaomi/push/jb$a;-><init>()V

    invoke-direct {p0, v0}, Lcom/xiaomi/push/iy;-><init>(Lcom/xiaomi/push/jh;)V

    return-void
.end method

.method public constructor <init>(Lcom/xiaomi/push/jh;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Lcom/xiaomi/push/jo;

    invoke-direct {v0}, Lcom/xiaomi/push/jo;-><init>()V

    iput-object v0, p0, Lcom/xiaomi/push/iy;->a:Lcom/xiaomi/push/jo;

    invoke-interface {p1, v0}, Lcom/xiaomi/push/jh;->a(Lcom/xiaomi/push/jp;)Lcom/xiaomi/push/jf;

    move-result-object p1

    iput-object p1, p0, Lcom/xiaomi/push/iy;->a:Lcom/xiaomi/push/jf;

    return-void
.end method


# virtual methods
.method public a(Lcom/xiaomi/push/iu;[B)V
    .locals 1

    :try_start_0
    iget-object v0, p0, Lcom/xiaomi/push/iy;->a:Lcom/xiaomi/push/jo;

    invoke-virtual {v0, p2}, Lcom/xiaomi/push/jo;->a([B)V

    iget-object p2, p0, Lcom/xiaomi/push/iy;->a:Lcom/xiaomi/push/jf;

    invoke-interface {p1, p2}, Lcom/xiaomi/push/iu;->a(Lcom/xiaomi/push/jf;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    iget-object p1, p0, Lcom/xiaomi/push/iy;->a:Lcom/xiaomi/push/jf;

    invoke-virtual {p1}, Lcom/xiaomi/push/jf;->k()V

    return-void

    :catchall_0
    move-exception p1

    iget-object p2, p0, Lcom/xiaomi/push/iy;->a:Lcom/xiaomi/push/jf;

    invoke-virtual {p2}, Lcom/xiaomi/push/jf;->k()V

    throw p1
.end method
