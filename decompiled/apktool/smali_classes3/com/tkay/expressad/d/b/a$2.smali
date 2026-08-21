.class final Lcom/tkay/expressad/d/b/a$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/d/b/a;->a(Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/tkay/expressad/d/b/a;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/d/b/a;Ljava/lang/String;)V
    .locals 0

    .line 76
    iput-object p1, p0, Lcom/tkay/expressad/d/b/a$2;->b:Lcom/tkay/expressad/d/b/a;

    iput-object p2, p0, Lcom/tkay/expressad/d/b/a$2;->a:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 80
    :try_start_0
    sget-object v0, Lcom/tkay/expressad/foundation/g/c/c;->k:Lcom/tkay/expressad/foundation/g/c/c;

    invoke-static {v0}, Lcom/tkay/expressad/foundation/g/c/f;->b(Lcom/tkay/expressad/foundation/g/c/c;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "mraid_js.txt"

    .line 82
    new-instance v2, Ljava/io/File;

    invoke-direct {v2, v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 83
    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 84
    invoke-virtual {v2}, Ljava/io/File;->delete()Z

    .line 86
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/d/b/a$2;->a:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    invoke-static {v0, v2}, Lcom/tkay/expressad/foundation/h/m;->a([BLjava/io/File;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 88
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method
