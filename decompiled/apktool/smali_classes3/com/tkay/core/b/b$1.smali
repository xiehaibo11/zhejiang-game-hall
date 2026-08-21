.class final Lcom/tkay/core/b/b$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/core/b/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/b/b;


# direct methods
.method constructor <init>(Lcom/tkay/core/b/b;)V
    .locals 0

    .line 81
    iput-object p1, p0, Lcom/tkay/core/b/b$1;->a:Lcom/tkay/core/b/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 84
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/core/b/b$1$1;

    invoke-direct {v1, p0}, Lcom/tkay/core/b/b$1$1;-><init>(Lcom/tkay/core/b/b$1;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method
