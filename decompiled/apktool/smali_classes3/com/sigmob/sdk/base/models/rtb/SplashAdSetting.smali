.class public final Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;
.super Lcom/czhj/wire/AndroidMessage;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting$ProtoAdapter_SplashAdSetting;,
        Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting$Builder;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/AndroidMessage<",
        "Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;",
        "Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting$Builder;",
        ">;"
    }
.end annotation


# static fields
.field public static final ADAPTER:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;",
            ">;"
        }
    .end annotation
.end field

.field public static final CREATOR:Landroid/os/Parcelable$Creator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/os/Parcelable$Creator<",
            "Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;",
            ">;"
        }
    .end annotation
.end field

.field public static final DEFAULT_AUTO_CLICK_MODE:Ljava/lang/Integer;

.field public static final DEFAULT_AUTO_CLICK_TIME_RATIO:Ljava/lang/Integer;

.field public static final DEFAULT_ENABLE_CLOSE_ON_CLICK:Ljava/lang/Boolean;

.field public static final DEFAULT_ENABLE_FULL_CLICK:Ljava/lang/Boolean;

.field public static final DEFAULT_INVISIBLE_AD_LABEL:Ljava/lang/Boolean;

.field public static final DEFAULT_SHOW_DURATION:Ljava/lang/Integer;

.field public static final DEFAULT_USE_FLOATING_BTN:Ljava/lang/Boolean;

.field private static final serialVersionUID:J


# instance fields
.field public final auto_click_mode:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        tag = 0x3
    .end annotation
.end field

.field public final auto_click_time_ratio:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#INT32"
        tag = 0x4
    .end annotation
.end field

.field public final enable_close_on_click:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0x2
    .end annotation
.end field

.field public final enable_full_click:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0x5
    .end annotation
.end field

.field public final invisible_ad_label:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0x6
    .end annotation
.end field

.field public final show_duration:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#INT32"
        tag = 0x1
    .end annotation
.end field

.field public final use_floating_btn:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0x7
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting$ProtoAdapter_SplashAdSetting;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting$ProtoAdapter_SplashAdSetting;-><init>()V

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-static {v0}, Lcom/czhj/wire/AndroidMessage;->newCreator(Lcom/czhj/wire/ProtoAdapter;)Landroid/os/Parcelable$Creator;

    move-result-object v0

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->CREATOR:Landroid/os/Parcelable$Creator;

    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    sput-object v1, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->DEFAULT_SHOW_DURATION:Ljava/lang/Integer;

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->DEFAULT_ENABLE_CLOSE_ON_CLICK:Ljava/lang/Boolean;

    sput-object v1, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->DEFAULT_AUTO_CLICK_MODE:Ljava/lang/Integer;

    sput-object v1, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->DEFAULT_AUTO_CLICK_TIME_RATIO:Ljava/lang/Integer;

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->DEFAULT_ENABLE_FULL_CLICK:Ljava/lang/Boolean;

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->DEFAULT_INVISIBLE_AD_LABEL:Ljava/lang/Boolean;

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->DEFAULT_USE_FLOATING_BTN:Ljava/lang/Boolean;

    return-void
.end method

.method public constructor <init>(Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;)V
    .locals 9

    sget-object v8, Lcom/czhj/wire/okio/ByteString;->EMPTY:Lcom/czhj/wire/okio/ByteString;

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    move-object v4, p4

    move-object v5, p5

    move-object v6, p6

    move-object/from16 v7, p7

    invoke-direct/range {v0 .. v8}, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;-><init>(Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Lcom/czhj/wire/okio/ByteString;)V

    return-void
.end method

.method public constructor <init>(Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Lcom/czhj/wire/okio/ByteString;)V
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-direct {p0, v0, p8}, Lcom/czhj/wire/AndroidMessage;-><init>(Lcom/czhj/wire/ProtoAdapter;Lcom/czhj/wire/okio/ByteString;)V

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->show_duration:Ljava/lang/Integer;

    iput-object p2, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->enable_close_on_click:Ljava/lang/Boolean;

    iput-object p3, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->auto_click_mode:Ljava/lang/Integer;

    iput-object p4, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->auto_click_time_ratio:Ljava/lang/Integer;

    iput-object p5, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->enable_full_click:Ljava/lang/Boolean;

    iput-object p6, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->invisible_ad_label:Ljava/lang/Boolean;

    iput-object p7, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->use_floating_btn:Ljava/lang/Boolean;

    return-void
.end method


# virtual methods
.method public equals(Ljava/lang/Object;)Z
    .locals 4

    const/4 v0, 0x1

    if-ne p1, p0, :cond_0

    return v0

    :cond_0
    instance-of v1, p1, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;

    const/4 v2, 0x0

    if-nez v1, :cond_1

    return v2

    :cond_1
    check-cast p1, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/czhj/wire/okio/ByteString;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->show_duration:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->show_duration:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->enable_close_on_click:Ljava/lang/Boolean;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->enable_close_on_click:Ljava/lang/Boolean;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->auto_click_mode:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->auto_click_mode:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->auto_click_time_ratio:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->auto_click_time_ratio:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->enable_full_click:Ljava/lang/Boolean;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->enable_full_click:Ljava/lang/Boolean;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->invisible_ad_label:Ljava/lang/Boolean;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->invisible_ad_label:Ljava/lang/Boolean;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->use_floating_btn:Ljava/lang/Boolean;

    iget-object p1, p1, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->use_floating_btn:Ljava/lang/Boolean;

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

    if-nez v0, :cond_7

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/wire/okio/ByteString;->hashCode()I

    move-result v0

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->show_duration:Ljava/lang/Integer;

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

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->enable_close_on_click:Ljava/lang/Boolean;

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v1

    goto :goto_1

    :cond_1
    move v1, v2

    :goto_1
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->auto_click_mode:Ljava/lang/Integer;

    if-eqz v1, :cond_2

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_2

    :cond_2
    move v1, v2

    :goto_2
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->auto_click_time_ratio:Ljava/lang/Integer;

    if-eqz v1, :cond_3

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_3

    :cond_3
    move v1, v2

    :goto_3
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->enable_full_click:Ljava/lang/Boolean;

    if-eqz v1, :cond_4

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v1

    goto :goto_4

    :cond_4
    move v1, v2

    :goto_4
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->invisible_ad_label:Ljava/lang/Boolean;

    if-eqz v1, :cond_5

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v1

    goto :goto_5

    :cond_5
    move v1, v2

    :goto_5
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->use_floating_btn:Ljava/lang/Boolean;

    if-eqz v1, :cond_6

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v2

    :cond_6
    add-int/2addr v0, v2

    iput v0, p0, Lcom/czhj/wire/AndroidMessage;->hashCode:I

    :cond_7
    return v0
.end method

.method public bridge synthetic newBuilder()Lcom/czhj/wire/Message$Builder;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->newBuilder()Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting$Builder;

    move-result-object v0

    return-object v0
.end method

.method public newBuilder()Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting$Builder;
    .locals 2

    new-instance v0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting$Builder;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting$Builder;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->show_duration:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting$Builder;->show_duration:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->enable_close_on_click:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting$Builder;->enable_close_on_click:Ljava/lang/Boolean;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->auto_click_mode:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting$Builder;->auto_click_mode:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->auto_click_time_ratio:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting$Builder;->auto_click_time_ratio:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->enable_full_click:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting$Builder;->enable_full_click:Ljava/lang/Boolean;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->invisible_ad_label:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting$Builder;->invisible_ad_label:Ljava/lang/Boolean;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->use_floating_btn:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting$Builder;->use_floating_btn:Ljava/lang/Boolean;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting$Builder;->addUnknownFields(Lcom/czhj/wire/okio/ByteString;)Lcom/czhj/wire/Message$Builder;

    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->show_duration:Ljava/lang/Integer;

    if-eqz v1, :cond_0

    const-string v1, ", show_duration="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->show_duration:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_0
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->enable_close_on_click:Ljava/lang/Boolean;

    if-eqz v1, :cond_1

    const-string v1, ", enable_close_on_click="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->enable_close_on_click:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_1
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->auto_click_mode:Ljava/lang/Integer;

    if-eqz v1, :cond_2

    const-string v1, ", auto_click_mode="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->auto_click_mode:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_2
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->auto_click_time_ratio:Ljava/lang/Integer;

    if-eqz v1, :cond_3

    const-string v1, ", auto_click_time_ratio="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->auto_click_time_ratio:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_3
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->enable_full_click:Ljava/lang/Boolean;

    if-eqz v1, :cond_4

    const-string v1, ", enable_full_click="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->enable_full_click:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_4
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->invisible_ad_label:Ljava/lang/Boolean;

    if-eqz v1, :cond_5

    const-string v1, ", invisible_ad_label="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->invisible_ad_label:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_5
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->use_floating_btn:Ljava/lang/Boolean;

    if-eqz v1, :cond_6

    const-string v1, ", use_floating_btn="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->use_floating_btn:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_6
    const/4 v1, 0x0

    const/4 v2, 0x2

    const-string v3, "SplashAdSetting{"

    invoke-virtual {v0, v1, v2, v3}, Ljava/lang/StringBuilder;->replace(IILjava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    const/16 v1, 0x7d

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
