.class public Lcom/tkay/core/api/TYNetworkConfig;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/core/api/TYNetworkConfig$Builder;
    }
.end annotation


# instance fields
.field mTYInitConfigList:Ljava/util/List;
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

    .line 12
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public getTYInitConfigList()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/tkay/core/api/TYInitConfig;",
            ">;"
        }
    .end annotation

    .line 17
    iget-object v0, p0, Lcom/tkay/core/api/TYNetworkConfig;->mTYInitConfigList:Ljava/util/List;

    return-object v0
.end method
