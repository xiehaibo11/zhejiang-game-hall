.class final Lcom/kwad/sdk/j$8;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/utils/b/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/j;->xo()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/utils/b/a;)V
    .locals 0

    if-nez p1, :cond_0

    return-void

    :cond_0
    invoke-static {p1}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->b(Lcom/kwad/sdk/utils/b/a;)V

    return-void
.end method
