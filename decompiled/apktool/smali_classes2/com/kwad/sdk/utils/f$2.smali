.class final Lcom/kwad/sdk/utils/f$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/utils/f;->a(Landroid/content/Context;JLcom/kwad/sdk/collector/h;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic jz:Landroid/content/Context;


# direct methods
.method constructor <init>(Landroid/content/Context;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/utils/f$2;->jz:Landroid/content/Context;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    new-instance v0, Lcom/kwad/sdk/utils/f$2$1;

    invoke-direct {v0, p0}, Lcom/kwad/sdk/utils/f$2$1;-><init>(Lcom/kwad/sdk/utils/f$2;)V

    iget-object v1, p0, Lcom/kwad/sdk/utils/f$2;->jz:Landroid/content/Context;

    invoke-static {v1, v0}, Lcom/kwad/sdk/collector/c;->a(Landroid/content/Context;Lcom/kwad/sdk/collector/c$a;)V

    return-void
.end method
