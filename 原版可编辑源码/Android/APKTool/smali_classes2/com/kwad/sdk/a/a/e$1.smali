.class final Lcom/kwad/sdk/a/a/e$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/a/a/e;->a(Landroid/widget/FrameLayout;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic ahW:Lcom/kwad/sdk/a/a/e;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/a/a/e;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/a/a/e$1;->ahW:Lcom/kwad/sdk/a/a/e;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/a/a/e$1;->ahW:Lcom/kwad/sdk/a/a/e;

    invoke-virtual {v0}, Lcom/kwad/sdk/a/a/e;->dismiss()V

    return-void
.end method
