.class public final Lcom/czhj/sdk/common/models/User;
.super Lcom/czhj/wire/AndroidMessage;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/czhj/sdk/common/models/User$ProtoAdapter_User;,
        Lcom/czhj/sdk/common/models/User$Builder;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/AndroidMessage<",
        "Lcom/czhj/sdk/common/models/User;",
        "Lcom/czhj/sdk/common/models/User$Builder;",
        ">;"
    }
.end annotation


# static fields
.field public static final ADAPTER:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Lcom/czhj/sdk/common/models/User;",
            ">;"
        }
    .end annotation
.end field

.field public static final CREATOR:Landroid/os/Parcelable$Creator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/os/Parcelable$Creator<",
            "Lcom/czhj/sdk/common/models/User;",
            ">;"
        }
    .end annotation
.end field

.field public static final DEFAULT_CHANGE_RECOMMENDATION_STATE:Ljava/lang/Boolean;

.field public static final DEFAULT_DISABLE_PERSONALIZED_RECOMMENDATION:Ljava/lang/Boolean;

.field public static final DEFAULT_GENDER:Ljava/lang/String; = ""

.field public static final DEFAULT_IS_MINOR:Ljava/lang/Boolean;

.field public static final DEFAULT_YOB:Ljava/lang/Integer;

.field private static final serialVersionUID:J


# instance fields
.field public final app_list:Ljava/util/List;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        label = .enum Lcom/czhj/wire/WireField$Label;->REPEATED:Lcom/czhj/wire/WireField$Label;
        tag = 0x3
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public final app_market_version:Lcom/czhj/sdk/common/models/Version;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "Version#ADAPTER"
        tag = 0x5
    .end annotation
.end field

.field public final change_recommendation_state:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0x9
    .end annotation
.end field

.field public final disable_personalized_recommendation:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0x8
    .end annotation
.end field

.field public final gender:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x2
    .end annotation
.end field

.field public final is_minor:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0x7
    .end annotation
.end field

.field public final user_strategy:Ljava/util/List;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        label = .enum Lcom/czhj/wire/WireField$Label;->REPEATED:Lcom/czhj/wire/WireField$Label;
        tag = 0x4
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public final yob:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        tag = 0x1
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Lcom/czhj/sdk/common/models/User$ProtoAdapter_User;

    invoke-direct {v0}, Lcom/czhj/sdk/common/models/User$ProtoAdapter_User;-><init>()V

    sput-object v0, Lcom/czhj/sdk/common/models/User;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-static {v0}, Lcom/czhj/wire/AndroidMessage;->newCreator(Lcom/czhj/wire/ProtoAdapter;)Landroid/os/Parcelable$Creator;

    move-result-object v0

    sput-object v0, Lcom/czhj/sdk/common/models/User;->CREATOR:Landroid/os/Parcelable$Creator;

    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    sput-object v0, Lcom/czhj/sdk/common/models/User;->DEFAULT_YOB:Ljava/lang/Integer;

    sput-object v1, Lcom/czhj/sdk/common/models/User;->DEFAULT_IS_MINOR:Ljava/lang/Boolean;

    sput-object v1, Lcom/czhj/sdk/common/models/User;->DEFAULT_DISABLE_PERSONALIZED_RECOMMENDATION:Ljava/lang/Boolean;

    sput-object v1, Lcom/czhj/sdk/common/models/User;->DEFAULT_CHANGE_RECOMMENDATION_STATE:Ljava/lang/Boolean;

    return-void
.end method

.method public constructor <init>(Ljava/lang/Integer;Ljava/lang/String;Ljava/util/List;Ljava/util/List;Lcom/czhj/sdk/common/models/Version;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;)V
    .locals 10
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;",
            "Lcom/czhj/sdk/common/models/Version;",
            "Ljava/lang/Boolean;",
            "Ljava/lang/Boolean;",
            "Ljava/lang/Boolean;",
            ")V"
        }
    .end annotation

    sget-object v9, Lcom/czhj/wire/okio/ByteString;->EMPTY:Lcom/czhj/wire/okio/ByteString;

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    move-object v4, p4

    move-object v5, p5

    move-object/from16 v6, p6

    move-object/from16 v7, p7

    move-object/from16 v8, p8

    invoke-direct/range {v0 .. v9}, Lcom/czhj/sdk/common/models/User;-><init>(Ljava/lang/Integer;Ljava/lang/String;Ljava/util/List;Ljava/util/List;Lcom/czhj/sdk/common/models/Version;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Lcom/czhj/wire/okio/ByteString;)V

    return-void
.end method

.method public constructor <init>(Ljava/lang/Integer;Ljava/lang/String;Ljava/util/List;Ljava/util/List;Lcom/czhj/sdk/common/models/Version;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Lcom/czhj/wire/okio/ByteString;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;",
            "Lcom/czhj/sdk/common/models/Version;",
            "Ljava/lang/Boolean;",
            "Ljava/lang/Boolean;",
            "Ljava/lang/Boolean;",
            "Lcom/czhj/wire/okio/ByteString;",
            ")V"
        }
    .end annotation

    sget-object v0, Lcom/czhj/sdk/common/models/User;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-direct {p0, v0, p9}, Lcom/czhj/wire/AndroidMessage;-><init>(Lcom/czhj/wire/ProtoAdapter;Lcom/czhj/wire/okio/ByteString;)V

    iput-object p1, p0, Lcom/czhj/sdk/common/models/User;->yob:Ljava/lang/Integer;

    iput-object p2, p0, Lcom/czhj/sdk/common/models/User;->gender:Ljava/lang/String;

    const-string p1, "app_list"

    invoke-static {p1, p3}, Lcom/czhj/wire/internal/Internal;->immutableCopyOf(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;

    move-result-object p1

    iput-object p1, p0, Lcom/czhj/sdk/common/models/User;->app_list:Ljava/util/List;

    const-string p1, "user_strategy"

    invoke-static {p1, p4}, Lcom/czhj/wire/internal/Internal;->immutableCopyOf(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;

    move-result-object p1

    iput-object p1, p0, Lcom/czhj/sdk/common/models/User;->user_strategy:Ljava/util/List;

    iput-object p5, p0, Lcom/czhj/sdk/common/models/User;->app_market_version:Lcom/czhj/sdk/common/models/Version;

    iput-object p6, p0, Lcom/czhj/sdk/common/models/User;->is_minor:Ljava/lang/Boolean;

    iput-object p7, p0, Lcom/czhj/sdk/common/models/User;->disable_personalized_recommendation:Ljava/lang/Boolean;

    iput-object p8, p0, Lcom/czhj/sdk/common/models/User;->change_recommendation_state:Ljava/lang/Boolean;

    return-void
.end method


# virtual methods
.method public equals(Ljava/lang/Object;)Z
    .locals 4

    const/4 v0, 0x1

    if-ne p1, p0, :cond_0

    return v0

    :cond_0
    instance-of v1, p1, Lcom/czhj/sdk/common/models/User;

    const/4 v2, 0x0

    if-nez v1, :cond_1

    return v2

    :cond_1
    check-cast p1, Lcom/czhj/sdk/common/models/User;

    invoke-virtual {p0}, Lcom/czhj/sdk/common/models/User;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {p1}, Lcom/czhj/sdk/common/models/User;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/czhj/wire/okio/ByteString;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/User;->yob:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/User;->yob:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/User;->gender:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/User;->gender:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/User;->app_list:Ljava/util/List;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/User;->app_list:Ljava/util/List;

    invoke-interface {v1, v3}, Ljava/util/List;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/User;->user_strategy:Ljava/util/List;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/User;->user_strategy:Ljava/util/List;

    invoke-interface {v1, v3}, Ljava/util/List;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/User;->app_market_version:Lcom/czhj/sdk/common/models/Version;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/User;->app_market_version:Lcom/czhj/sdk/common/models/Version;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/User;->is_minor:Ljava/lang/Boolean;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/User;->is_minor:Ljava/lang/Boolean;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/User;->disable_personalized_recommendation:Ljava/lang/Boolean;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/User;->disable_personalized_recommendation:Ljava/lang/Boolean;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/User;->change_recommendation_state:Ljava/lang/Boolean;

    iget-object p1, p1, Lcom/czhj/sdk/common/models/User;->change_recommendation_state:Ljava/lang/Boolean;

    invoke-static {v1, p1}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    goto :goto_0

    :cond_2
    move v0, v2

    :goto_0
    return v0
.end method

.method public hashCode()I
    .locals 3

    iget v0, p0, Lcom/czhj/wire/AndroidMessage;->hashCode:I

    if-nez v0, :cond_6

    invoke-virtual {p0}, Lcom/czhj/sdk/common/models/User;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/wire/okio/ByteString;->hashCode()I

    move-result v0

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/User;->yob:Ljava/lang/Integer;

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_0

    :cond_0
    move v1, v2

    :goto_0
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/User;->gender:Ljava/lang/String;

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_1

    :cond_1
    move v1, v2

    :goto_1
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/User;->app_list:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->hashCode()I

    move-result v1

    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/User;->user_strategy:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->hashCode()I

    move-result v1

    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/User;->app_market_version:Lcom/czhj/sdk/common/models/Version;

    if-eqz v1, :cond_2

    invoke-virtual {v1}, Lcom/czhj/sdk/common/models/Version;->hashCode()I

    move-result v1

    goto :goto_2

    :cond_2
    move v1, v2

    :goto_2
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/User;->is_minor:Ljava/lang/Boolean;

    if-eqz v1, :cond_3

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v1

    goto :goto_3

    :cond_3
    move v1, v2

    :goto_3
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/User;->disable_personalized_recommendation:Ljava/lang/Boolean;

    if-eqz v1, :cond_4

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v1

    goto :goto_4

    :cond_4
    move v1, v2

    :goto_4
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/User;->change_recommendation_state:Ljava/lang/Boolean;

    if-eqz v1, :cond_5

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v2

    :cond_5
    add-int/2addr v0, v2

    iput v0, p0, Lcom/czhj/wire/AndroidMessage;->hashCode:I

    :cond_6
    return v0
.end method

.method public newBuilder()Lcom/czhj/sdk/common/models/User$Builder;
    .locals 3

    new-instance v0, Lcom/czhj/sdk/common/models/User$Builder;

    invoke-direct {v0}, Lcom/czhj/sdk/common/models/User$Builder;-><init>()V

    iget-object v1, p0, Lcom/czhj/sdk/common/models/User;->yob:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/User$Builder;->yob:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/User;->gender:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/User$Builder;->gender:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/User;->app_list:Ljava/util/List;

    const-string v2, "app_list"

    invoke-static {v2, v1}, Lcom/czhj/wire/internal/Internal;->copyOf(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;

    move-result-object v1

    iput-object v1, v0, Lcom/czhj/sdk/common/models/User$Builder;->app_list:Ljava/util/List;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/User;->user_strategy:Ljava/util/List;

    const-string v2, "user_strategy"

    invoke-static {v2, v1}, Lcom/czhj/wire/internal/Internal;->copyOf(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;

    move-result-object v1

    iput-object v1, v0, Lcom/czhj/sdk/common/models/User$Builder;->user_strategy:Ljava/util/List;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/User;->app_market_version:Lcom/czhj/sdk/common/models/Version;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/User$Builder;->app_market_version:Lcom/czhj/sdk/common/models/Version;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/User;->is_minor:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/User$Builder;->is_minor:Ljava/lang/Boolean;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/User;->disable_personalized_recommendation:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/User$Builder;->disable_personalized_recommendation:Ljava/lang/Boolean;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/User;->change_recommendation_state:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/User$Builder;->change_recommendation_state:Ljava/lang/Boolean;

    invoke-virtual {p0}, Lcom/czhj/sdk/common/models/User;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/User$Builder;->addUnknownFields(Lcom/czhj/wire/okio/ByteString;)Lcom/czhj/wire/Message$Builder;

    return-object v0
.end method

.method public bridge synthetic newBuilder()Lcom/czhj/wire/Message$Builder;
    .locals 1

    invoke-virtual {p0}, Lcom/czhj/sdk/common/models/User;->newBuilder()Lcom/czhj/sdk/common/models/User$Builder;

    move-result-object v0

    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/czhj/sdk/common/models/User;->yob:Ljava/lang/Integer;

    if-eqz v1, :cond_0

    const-string v1, ", yob="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/User;->yob:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_0
    iget-object v1, p0, Lcom/czhj/sdk/common/models/User;->gender:Ljava/lang/String;

    if-eqz v1, :cond_1

    const-string v1, ", gender="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/User;->gender:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_1
    iget-object v1, p0, Lcom/czhj/sdk/common/models/User;->app_list:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_2

    const-string v1, ", app_list="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/User;->app_list:Ljava/util/List;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_2
    iget-object v1, p0, Lcom/czhj/sdk/common/models/User;->user_strategy:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_3

    const-string v1, ", user_strategy="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/User;->user_strategy:Ljava/util/List;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_3
    iget-object v1, p0, Lcom/czhj/sdk/common/models/User;->app_market_version:Lcom/czhj/sdk/common/models/Version;

    if-eqz v1, :cond_4

    const-string v1, ", app_market_version="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/User;->app_market_version:Lcom/czhj/sdk/common/models/Version;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_4
    iget-object v1, p0, Lcom/czhj/sdk/common/models/User;->is_minor:Ljava/lang/Boolean;

    if-eqz v1, :cond_5

    const-string v1, ", is_minor="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/User;->is_minor:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_5
    iget-object v1, p0, Lcom/czhj/sdk/common/models/User;->disable_personalized_recommendation:Ljava/lang/Boolean;

    if-eqz v1, :cond_6

    const-string v1, ", disable_personalized_recommendation="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/User;->disable_personalized_recommendation:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_6
    iget-object v1, p0, Lcom/czhj/sdk/common/models/User;->change_recommendation_state:Ljava/lang/Boolean;

    if-eqz v1, :cond_7

    const-string v1, ", change_recommendation_state="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/User;->change_recommendation_state:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_7
    const/4 v1, 0x0

    const/4 v2, 0x2

    const-string v3, "User{"

    invoke-virtual {v0, v1, v2, v3}, Ljava/lang/StringBuilder;->replace(IILjava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    const/16 v1, 0x7d

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
