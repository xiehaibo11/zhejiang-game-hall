.class final Lcom/tkay/basead/a/b/b$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/basead/a/b/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/a/b/b;


# direct methods
.method constructor <init>(Lcom/tkay/basead/a/b/b;)V
    .locals 0

    .line 52
    iput-object p1, p0, Lcom/tkay/basead/a/b/b$1;->a:Lcom/tkay/basead/a/b/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 56
    iget-object v0, p0, Lcom/tkay/basead/a/b/b$1;->a:Lcom/tkay/basead/a/b/b;

    const-string v1, "20001"

    const-string v2, "Load timeout!"

    invoke-static {v1, v2}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/tkay/basead/a/b/b;->a(Lcom/tkay/basead/a/b/b;Lcom/tkay/basead/c/e;)V

    return-void
.end method
