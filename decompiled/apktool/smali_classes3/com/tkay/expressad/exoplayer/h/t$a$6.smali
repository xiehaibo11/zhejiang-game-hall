.class final Lcom/tkay/expressad/exoplayer/h/t$a$6;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/exoplayer/h/t$a;->a(Lcom/tkay/expressad/exoplayer/h/t$b;Lcom/tkay/expressad/exoplayer/h/t$c;Ljava/io/IOException;Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/exoplayer/h/t;

.field final synthetic b:Lcom/tkay/expressad/exoplayer/h/t$b;

.field final synthetic c:Lcom/tkay/expressad/exoplayer/h/t$c;

.field final synthetic d:Ljava/io/IOException;

.field final synthetic e:Z

.field final synthetic f:Lcom/tkay/expressad/exoplayer/h/t$a;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/exoplayer/h/t$a;Lcom/tkay/expressad/exoplayer/h/t;Lcom/tkay/expressad/exoplayer/h/t$b;Lcom/tkay/expressad/exoplayer/h/t$c;Ljava/io/IOException;Z)V
    .locals 0

    .line 612
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/t$a$6;->f:Lcom/tkay/expressad/exoplayer/h/t$a;

    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/h/t$a$6;->a:Lcom/tkay/expressad/exoplayer/h/t;

    iput-object p3, p0, Lcom/tkay/expressad/exoplayer/h/t$a$6;->b:Lcom/tkay/expressad/exoplayer/h/t$b;

    iput-object p4, p0, Lcom/tkay/expressad/exoplayer/h/t$a$6;->c:Lcom/tkay/expressad/exoplayer/h/t$c;

    iput-object p5, p0, Lcom/tkay/expressad/exoplayer/h/t$a$6;->d:Ljava/io/IOException;

    iput-boolean p6, p0, Lcom/tkay/expressad/exoplayer/h/t$a$6;->e:Z

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 7

    .line 615
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/t$a$6;->a:Lcom/tkay/expressad/exoplayer/h/t;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/t$a$6;->f:Lcom/tkay/expressad/exoplayer/h/t$a;

    iget v1, v1, Lcom/tkay/expressad/exoplayer/h/t$a;->a:I

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/h/t$a$6;->f:Lcom/tkay/expressad/exoplayer/h/t$a;

    iget-object v2, v2, Lcom/tkay/expressad/exoplayer/h/t$a;->b:Lcom/tkay/expressad/exoplayer/h/s$a;

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/h/t$a$6;->b:Lcom/tkay/expressad/exoplayer/h/t$b;

    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/h/t$a$6;->c:Lcom/tkay/expressad/exoplayer/h/t$c;

    iget-object v5, p0, Lcom/tkay/expressad/exoplayer/h/t$a$6;->d:Ljava/io/IOException;

    iget-boolean v6, p0, Lcom/tkay/expressad/exoplayer/h/t$a$6;->e:Z

    invoke-interface/range {v0 .. v6}, Lcom/tkay/expressad/exoplayer/h/t;->a(ILcom/tkay/expressad/exoplayer/h/s$a;Lcom/tkay/expressad/exoplayer/h/t$b;Lcom/tkay/expressad/exoplayer/h/t$c;Ljava/io/IOException;Z)V

    return-void
.end method
