.class final Lcom/kwad/components/core/widget/ComplianceTextView$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/widget/ComplianceTextView;->setAdTemplate(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Yf:Lcom/kwad/components/core/widget/ComplianceTextView;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/widget/ComplianceTextView;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/widget/ComplianceTextView$1;->Yf:Lcom/kwad/components/core/widget/ComplianceTextView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/core/widget/ComplianceTextView$1;->Yf:Lcom/kwad/components/core/widget/ComplianceTextView;

    invoke-static {v0}, Lcom/kwad/components/core/widget/ComplianceTextView;->a(Lcom/kwad/components/core/widget/ComplianceTextView;)Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/core/widget/ComplianceTextView$1;->Yf:Lcom/kwad/components/core/widget/ComplianceTextView;

    invoke-static {v2}, Lcom/kwad/components/core/widget/ComplianceTextView;->b(Lcom/kwad/components/core/widget/ComplianceTextView;)Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/kwad/components/core/widget/ComplianceTextView$1;->Yf:Lcom/kwad/components/core/widget/ComplianceTextView;

    invoke-static {v3}, Lcom/kwad/components/core/widget/ComplianceTextView;->c(Lcom/kwad/components/core/widget/ComplianceTextView;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v1, v2, v3}, Lcom/kwad/components/core/widget/ComplianceTextView;->a(Lcom/kwad/components/core/widget/ComplianceTextView;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
