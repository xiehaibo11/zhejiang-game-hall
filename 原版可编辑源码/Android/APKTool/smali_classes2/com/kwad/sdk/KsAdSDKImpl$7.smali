.class final Lcom/kwad/sdk/KsAdSDKImpl$7;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/e/a/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/KsAdSDKImpl;->initSdkLog()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic ahc:Lcom/kwad/sdk/KsAdSDKImpl;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/KsAdSDKImpl;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/KsAdSDKImpl$7;->ahc:Lcom/kwad/sdk/KsAdSDKImpl;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final B(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    new-instance v0, Lcom/kwad/sdk/core/report/m;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/m;-><init>()V

    iput-object p1, v0, Lcom/kwad/sdk/core/report/m;->ara:Ljava/lang/String;

    invoke-static {v0, p2}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Lcom/kwad/sdk/core/report/m;Ljava/lang/String;)V

    return-void
.end method
