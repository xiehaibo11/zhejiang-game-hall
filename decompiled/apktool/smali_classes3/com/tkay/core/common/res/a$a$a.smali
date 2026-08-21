.class final Lcom/tkay/core/common/res/a$a$a;
.super Ljava/io/FilterOutputStream;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/core/common/res/a$a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "a"
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/res/a$a;


# direct methods
.method private constructor <init>(Lcom/tkay/core/common/res/a$a;Ljava/io/OutputStream;)V
    .locals 0

    .line 812
    iput-object p1, p0, Lcom/tkay/core/common/res/a$a$a;->a:Lcom/tkay/core/common/res/a$a;

    .line 813
    invoke-direct {p0, p2}, Ljava/io/FilterOutputStream;-><init>(Ljava/io/OutputStream;)V

    return-void
.end method

.method synthetic constructor <init>(Lcom/tkay/core/common/res/a$a;Ljava/io/OutputStream;B)V
    .locals 0

    .line 811
    invoke-direct {p0, p1, p2}, Lcom/tkay/core/common/res/a$a$a;-><init>(Lcom/tkay/core/common/res/a$a;Ljava/io/OutputStream;)V

    return-void
.end method


# virtual methods
.method public final close()V
    .locals 1

    .line 837
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/res/a$a$a;->out:Ljava/io/OutputStream;

    invoke-virtual {v0}, Ljava/io/OutputStream;->close()V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    .line 839
    :catch_0
    iget-object v0, p0, Lcom/tkay/core/common/res/a$a$a;->a:Lcom/tkay/core/common/res/a$a;

    invoke-static {v0}, Lcom/tkay/core/common/res/a$a;->b(Lcom/tkay/core/common/res/a$a;)Z

    return-void
.end method

.method public final flush()V
    .locals 1

    .line 846
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/res/a$a$a;->out:Ljava/io/OutputStream;

    invoke-virtual {v0}, Ljava/io/OutputStream;->flush()V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    .line 848
    :catch_0
    iget-object v0, p0, Lcom/tkay/core/common/res/a$a$a;->a:Lcom/tkay/core/common/res/a$a;

    invoke-static {v0}, Lcom/tkay/core/common/res/a$a;->b(Lcom/tkay/core/common/res/a$a;)Z

    return-void
.end method

.method public final write(I)V
    .locals 1

    .line 819
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/res/a$a$a;->out:Ljava/io/OutputStream;

    invoke-virtual {v0, p1}, Ljava/io/OutputStream;->write(I)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    .line 821
    :catch_0
    iget-object p1, p0, Lcom/tkay/core/common/res/a$a$a;->a:Lcom/tkay/core/common/res/a$a;

    invoke-static {p1}, Lcom/tkay/core/common/res/a$a;->b(Lcom/tkay/core/common/res/a$a;)Z

    return-void
.end method

.method public final write([BII)V
    .locals 1

    .line 828
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/res/a$a$a;->out:Ljava/io/OutputStream;

    invoke-virtual {v0, p1, p2, p3}, Ljava/io/OutputStream;->write([BII)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    .line 830
    :catch_0
    iget-object p1, p0, Lcom/tkay/core/common/res/a$a$a;->a:Lcom/tkay/core/common/res/a$a;

    invoke-static {p1}, Lcom/tkay/core/common/res/a$a;->b(Lcom/tkay/core/common/res/a$a;)Z

    return-void
.end method
