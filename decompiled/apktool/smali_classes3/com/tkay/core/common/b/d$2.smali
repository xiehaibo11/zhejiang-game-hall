.class final Lcom/tkay/core/common/b/d$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/b/d;->onActivityResumed(Landroid/app/Activity;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:J

.field final synthetic b:Lcom/tkay/core/common/b/d;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/b/d;J)V
    .locals 0

    .line 98
    iput-object p1, p0, Lcom/tkay/core/common/b/d$2;->b:Lcom/tkay/core/common/b/d;

    iput-wide p2, p0, Lcom/tkay/core/common/b/d$2;->a:J

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 101
    iget-object v0, p0, Lcom/tkay/core/common/b/d$2;->b:Lcom/tkay/core/common/b/d;

    iget-wide v1, p0, Lcom/tkay/core/common/b/d$2;->a:J

    invoke-static {v0, v1, v2}, Lcom/tkay/core/common/b/d;->a(Lcom/tkay/core/common/b/d;J)V

    return-void
.end method
