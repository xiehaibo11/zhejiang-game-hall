.class public Lcom/xiaomi/push/ja;
.super Ljava/lang/Object;


# instance fields
.field private a:Lcom/xiaomi/push/jf;

.field private final a:Lcom/xiaomi/push/jm;

.field private final a:Ljava/io/ByteArrayOutputStream;


# direct methods
.method public constructor <init>()V
    .locals 1

    new-instance v0, Lcom/xiaomi/push/jb$a;

    invoke-direct {v0}, Lcom/xiaomi/push/jb$a;-><init>()V

    invoke-direct {p0, v0}, Lcom/xiaomi/push/ja;-><init>(Lcom/xiaomi/push/jh;)V

    return-void
.end method

.method public constructor <init>(Lcom/xiaomi/push/jh;)V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/io/ByteArrayOutputStream;

    invoke-direct {v0}, Ljava/io/ByteArrayOutputStream;-><init>()V

    iput-object v0, p0, Lcom/xiaomi/push/ja;->a:Ljava/io/ByteArrayOutputStream;

    new-instance v0, Lcom/xiaomi/push/jm;

    iget-object v1, p0, Lcom/xiaomi/push/ja;->a:Ljava/io/ByteArrayOutputStream;

    invoke-direct {v0, v1}, Lcom/xiaomi/push/jm;-><init>(Ljava/io/OutputStream;)V

    iput-object v0, p0, Lcom/xiaomi/push/ja;->a:Lcom/xiaomi/push/jm;

    invoke-interface {p1, v0}, Lcom/xiaomi/push/jh;->a(Lcom/xiaomi/push/jp;)Lcom/xiaomi/push/jf;

    move-result-object p1

    iput-object p1, p0, Lcom/xiaomi/push/ja;->a:Lcom/xiaomi/push/jf;

    return-void
.end method


# virtual methods
.method public a(Lcom/xiaomi/push/iu;)[B
    .locals 1

    iget-object v0, p0, Lcom/xiaomi/push/ja;->a:Ljava/io/ByteArrayOutputStream;

    invoke-virtual {v0}, Ljava/io/ByteArrayOutputStream;->reset()V

    iget-object v0, p0, Lcom/xiaomi/push/ja;->a:Lcom/xiaomi/push/jf;

    invoke-interface {p1, v0}, Lcom/xiaomi/push/iu;->b(Lcom/xiaomi/push/jf;)V

    iget-object p1, p0, Lcom/xiaomi/push/ja;->a:Ljava/io/ByteArrayOutputStream;

    invoke-virtual {p1}, Ljava/io/ByteArrayOutputStream;->toByteArray()[B

    move-result-object p1

    return-object p1
.end method
