.class public abstract Lcom/tkay/core/api/TYInitConfig;
.super Ljava/lang/Object;


# instance fields
.field protected initMediation:Lcom/tkay/core/api/TYInitMediation;

.field protected paramMap:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 19
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 20
    new-instance v0, Ljava/util/HashMap;

    const/4 v1, 0x4

    invoke-direct {v0, v1}, Ljava/util/HashMap;-><init>(I)V

    iput-object v0, p0, Lcom/tkay/core/api/TYInitConfig;->paramMap:Ljava/util/Map;

    return-void
.end method


# virtual methods
.method public final getInitMediation()Lcom/tkay/core/api/TYInitMediation;
    .locals 1

    .line 25
    iget-object v0, p0, Lcom/tkay/core/api/TYInitConfig;->initMediation:Lcom/tkay/core/api/TYInitMediation;

    return-object v0
.end method

.method public final getRequestParamMap()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation

    .line 29
    iget-object v0, p0, Lcom/tkay/core/api/TYInitConfig;->paramMap:Ljava/util/Map;

    return-object v0
.end method
