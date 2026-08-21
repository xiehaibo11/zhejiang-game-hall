.class Lcom/sigmob/sdk/mraid2/e$3$2;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/animation/Animator$AnimatorListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/mraid2/e$3;->a(Lorg/json/JSONObject;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/sigmob/sdk/mraid2/e$3;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/mraid2/e$3;Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid2/e$3$2;->b:Lcom/sigmob/sdk/mraid2/e$3;

    iput-object p2, p0, Lcom/sigmob/sdk/mraid2/e$3$2;->a:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onAnimationCancel(Landroid/animation/Animator;)V
    .locals 0

    return-void
.end method

.method public onAnimationEnd(Landroid/animation/Animator;)V
    .locals 1

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/e$3$2;->b:Lcom/sigmob/sdk/mraid2/e$3;

    iget-object p1, p1, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid2/e;->c(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/mraid2/b;

    move-result-object p1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/e$3$2;->a:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/mraid2/b;->g(Ljava/lang/String;)V

    return-void
.end method

.method public onAnimationRepeat(Landroid/animation/Animator;)V
    .locals 0

    return-void
.end method

.method public onAnimationStart(Landroid/animation/Animator;)V
    .locals 0

    return-void
.end method
