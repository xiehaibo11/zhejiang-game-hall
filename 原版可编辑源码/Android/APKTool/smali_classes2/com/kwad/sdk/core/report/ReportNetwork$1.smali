.class Lcom/kwad/sdk/core/report/ReportNetwork$1;
.super Lcom/kwad/sdk/core/response/model/ReportResultData;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/core/report/y;->a(Lcom/kwad/sdk/core/network/c;)Lcom/kwad/sdk/core/response/model/ReportResultData;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/kwad/sdk/core/report/y;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/core/report/y;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/report/ReportNetwork$1;->this$0:Lcom/kwad/sdk/core/report/y;

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/model/ReportResultData;-><init>()V

    return-void
.end method


# virtual methods
.method public parseJson(Lorg/json/JSONObject;)V
    .locals 0

    invoke-super {p0, p1}, Lcom/kwad/sdk/core/response/model/ReportResultData;->parseJson(Lorg/json/JSONObject;)V

    return-void
.end method
