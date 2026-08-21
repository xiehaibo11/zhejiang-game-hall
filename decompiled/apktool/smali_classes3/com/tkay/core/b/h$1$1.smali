.class final Lcom/tkay/core/b/h$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/b/h$1;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/b/h$1;


# direct methods
.method constructor <init>(Lcom/tkay/core/b/h$1;)V
    .locals 0

    .line 74
    iput-object p1, p0, Lcom/tkay/core/b/h$1$1;->a:Lcom/tkay/core/b/h$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    .line 77
    iget-object v0, p0, Lcom/tkay/core/b/h$1$1;->a:Lcom/tkay/core/b/h$1;

    iget-object v0, v0, Lcom/tkay/core/b/h$1;->a:Lcom/tkay/core/b/h;

    invoke-static {v0}, Lcom/tkay/core/b/h;->a(Lcom/tkay/core/b/h;)V

    return-void
.end method
