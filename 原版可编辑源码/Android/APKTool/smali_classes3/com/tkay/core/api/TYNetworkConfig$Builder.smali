.class public Lcom/tkay/core/api/TYNetworkConfig$Builder;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/core/api/TYNetworkConfig;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "Builder"
.end annotation


# instance fields
.field mTYInitConfigs:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/core/api/TYInitConfig;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 21
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public build()Lcom/tkay/core/api/TYNetworkConfig;
    .locals 2

    .line 30
    new-instance v0, Lcom/tkay/core/api/TYNetworkConfig;

    invoke-direct {v0}, Lcom/tkay/core/api/TYNetworkConfig;-><init>()V

    .line 31
    iget-object v1, p0, Lcom/tkay/core/api/TYNetworkConfig$Builder;->mTYInitConfigs:Ljava/util/List;

    iput-object v1, v0, Lcom/tkay/core/api/TYNetworkConfig;->mTYInitConfigList:Ljava/util/List;

    return-object v0
.end method

.method public withInitConfigList(Ljava/util/List;)Lcom/tkay/core/api/TYNetworkConfig$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/core/api/TYInitConfig;",
            ">;)",
            "Lcom/tkay/core/api/TYNetworkConfig$Builder;"
        }
    .end annotation

    .line 25
    iput-object p1, p0, Lcom/tkay/core/api/TYNetworkConfig$Builder;->mTYInitConfigs:Ljava/util/List;

    return-object p0
.end method
