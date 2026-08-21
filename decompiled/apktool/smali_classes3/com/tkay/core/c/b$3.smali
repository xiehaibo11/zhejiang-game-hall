.class final Lcom/tkay/core/c/b$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/c/b;->a(Landroid/content/Context;Ljava/lang/Object;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/c/b;


# direct methods
.method constructor <init>(Lcom/tkay/core/c/b;)V
    .locals 0

    .line 446
    iput-object p1, p0, Lcom/tkay/core/c/b$3;->a:Lcom/tkay/core/c/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 449
    invoke-static {}, Lcom/tkay/core/common/n;->a()Lcom/tkay/core/common/n;

    move-result-object v0

    invoke-static {}, Lcom/tkay/core/c/b;->c()Lcom/tkay/core/c/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/c/a;->c()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/n;->a(Ljava/lang/String;)V

    return-void
.end method
