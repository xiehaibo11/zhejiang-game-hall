.class public final Lcom/czhj/sdk/common/models/User$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/sdk/common/models/User;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/czhj/sdk/common/models/User;",
        "Lcom/czhj/sdk/common/models/User$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public app_list:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public app_market_version:Lcom/czhj/sdk/common/models/Version;

.field public change_recommendation_state:Ljava/lang/Boolean;

.field public disable_personalized_recommendation:Ljava/lang/Boolean;

.field public gender:Ljava/lang/String;

.field public is_minor:Ljava/lang/Boolean;

.field public user_strategy:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public yob:Ljava/lang/Integer;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;-><init>()V

    sget-object v0, Lcom/czhj/sdk/common/models/User;->DEFAULT_YOB:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/User$Builder;->yob:Ljava/lang/Integer;

    const-string v0, ""

    iput-object v0, p0, Lcom/czhj/sdk/common/models/User$Builder;->gender:Ljava/lang/String;

    sget-object v0, Lcom/czhj/sdk/common/models/User;->DEFAULT_IS_MINOR:Ljava/lang/Boolean;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/User$Builder;->is_minor:Ljava/lang/Boolean;

    sget-object v0, Lcom/czhj/sdk/common/models/User;->DEFAULT_DISABLE_PERSONALIZED_RECOMMENDATION:Ljava/lang/Boolean;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/User$Builder;->disable_personalized_recommendation:Ljava/lang/Boolean;

    sget-object v0, Lcom/czhj/sdk/common/models/User;->DEFAULT_CHANGE_RECOMMENDATION_STATE:Ljava/lang/Boolean;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/User$Builder;->change_recommendation_state:Ljava/lang/Boolean;

    invoke-static {}, Lcom/czhj/wire/internal/Internal;->newMutableList()Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/sdk/common/models/User$Builder;->app_list:Ljava/util/List;

    invoke-static {}, Lcom/czhj/wire/internal/Internal;->newMutableList()Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/sdk/common/models/User$Builder;->user_strategy:Ljava/util/List;

    return-void
.end method


# virtual methods
.method public app_list(Ljava/util/List;)Lcom/czhj/sdk/common/models/User$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)",
            "Lcom/czhj/sdk/common/models/User$Builder;"
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/wire/internal/Internal;->checkElementsNotNull(Ljava/util/List;)V

    iput-object p1, p0, Lcom/czhj/sdk/common/models/User$Builder;->app_list:Ljava/util/List;

    return-object p0
.end method

.method public app_market_version(Lcom/czhj/sdk/common/models/Version;)Lcom/czhj/sdk/common/models/User$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/User$Builder;->app_market_version:Lcom/czhj/sdk/common/models/Version;

    return-object p0
.end method

.method public build()Lcom/czhj/sdk/common/models/User;
    .locals 11

    new-instance v10, Lcom/czhj/sdk/common/models/User;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/User$Builder;->yob:Ljava/lang/Integer;

    iget-object v2, p0, Lcom/czhj/sdk/common/models/User$Builder;->gender:Ljava/lang/String;

    iget-object v3, p0, Lcom/czhj/sdk/common/models/User$Builder;->app_list:Ljava/util/List;

    iget-object v4, p0, Lcom/czhj/sdk/common/models/User$Builder;->user_strategy:Ljava/util/List;

    iget-object v5, p0, Lcom/czhj/sdk/common/models/User$Builder;->app_market_version:Lcom/czhj/sdk/common/models/Version;

    iget-object v6, p0, Lcom/czhj/sdk/common/models/User$Builder;->is_minor:Ljava/lang/Boolean;

    iget-object v7, p0, Lcom/czhj/sdk/common/models/User$Builder;->disable_personalized_recommendation:Ljava/lang/Boolean;

    iget-object v8, p0, Lcom/czhj/sdk/common/models/User$Builder;->change_recommendation_state:Ljava/lang/Boolean;

    invoke-super {p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v9

    move-object v0, v10

    invoke-direct/range {v0 .. v9}, Lcom/czhj/sdk/common/models/User;-><init>(Ljava/lang/Integer;Ljava/lang/String;Ljava/util/List;Ljava/util/List;Lcom/czhj/sdk/common/models/Version;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Lcom/czhj/wire/okio/ByteString;)V

    return-object v10
.end method

.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/czhj/sdk/common/models/User$Builder;->build()Lcom/czhj/sdk/common/models/User;

    move-result-object v0

    return-object v0
.end method

.method public change_recommendation_state(Ljava/lang/Boolean;)Lcom/czhj/sdk/common/models/User$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/User$Builder;->change_recommendation_state:Ljava/lang/Boolean;

    return-object p0
.end method

.method public disable_personalized_recommendation(Ljava/lang/Boolean;)Lcom/czhj/sdk/common/models/User$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/User$Builder;->disable_personalized_recommendation:Ljava/lang/Boolean;

    return-object p0
.end method

.method public gender(Ljava/lang/String;)Lcom/czhj/sdk/common/models/User$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/User$Builder;->gender:Ljava/lang/String;

    return-object p0
.end method

.method public is_minor(Ljava/lang/Boolean;)Lcom/czhj/sdk/common/models/User$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/User$Builder;->is_minor:Ljava/lang/Boolean;

    return-object p0
.end method

.method public user_strategy(Ljava/util/List;)Lcom/czhj/sdk/common/models/User$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)",
            "Lcom/czhj/sdk/common/models/User$Builder;"
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/wire/internal/Internal;->checkElementsNotNull(Ljava/util/List;)V

    iput-object p1, p0, Lcom/czhj/sdk/common/models/User$Builder;->user_strategy:Ljava/util/List;

    return-object p0
.end method

.method public yob(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/User$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/User$Builder;->yob:Ljava/lang/Integer;

    return-object p0
.end method
