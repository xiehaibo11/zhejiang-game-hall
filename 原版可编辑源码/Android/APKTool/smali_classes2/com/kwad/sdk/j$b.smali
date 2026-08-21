.class final Lcom/kwad/sdk/j$b;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/download/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/j;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "b"
.end annotation


# direct methods
.method private constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(B)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/j$b;-><init>()V

    return-void
.end method


# virtual methods
.method public final b(ILcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 1

    const/4 v0, 0x1

    if-eq p1, v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    invoke-static {p2, p1}, Lcom/kwad/sdk/core/report/a;->e(Lcom/kwad/sdk/core/response/model/AdTemplate;Lorg/json/JSONObject;)V

    :goto_0
    return-void
.end method
