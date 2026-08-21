.class final Lcom/tkay/expressad/advanced/c/a$7$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/advanced/c/a$7;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/io/File;

.field final synthetic b:Lcom/tkay/expressad/advanced/c/a$7;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/advanced/c/a$7;Ljava/io/File;)V
    .locals 0

    .line 747
    iput-object p1, p0, Lcom/tkay/expressad/advanced/c/a$7$1;->b:Lcom/tkay/expressad/advanced/c/a$7;

    iput-object p2, p0, Lcom/tkay/expressad/advanced/c/a$7$1;->a:Ljava/io/File;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    .line 750
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/a$7$1;->b:Lcom/tkay/expressad/advanced/c/a$7;

    iget-object v0, v0, Lcom/tkay/expressad/advanced/c/a$7;->c:Lcom/tkay/expressad/advanced/c/a;

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "file:////"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/tkay/expressad/advanced/c/a$7$1;->a:Ljava/io/File;

    invoke-virtual {v2}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/advanced/c/a$7$1;->b:Lcom/tkay/expressad/advanced/c/a$7;

    iget-object v2, v2, Lcom/tkay/expressad/advanced/c/a$7;->a:Lcom/tkay/expressad/foundation/d/c;

    iget-object v3, p0, Lcom/tkay/expressad/advanced/c/a$7$1;->b:Lcom/tkay/expressad/advanced/c/a$7;

    iget v3, v3, Lcom/tkay/expressad/advanced/c/a$7;->b:I

    invoke-static {v0, v1, v2, v3}, Lcom/tkay/expressad/advanced/c/a;->a(Lcom/tkay/expressad/advanced/c/a;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;I)V

    return-void
.end method
