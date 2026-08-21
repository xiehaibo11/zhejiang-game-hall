.class public final Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;
.super Lcom/czhj/wire/AndroidMessage;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$ProtoAdapter_CompanionEndcard;,
        Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/AndroidMessage<",
        "Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;",
        "Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;",
        ">;"
    }
.end annotation


# static fields
.field public static final ADAPTER:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;",
            ">;"
        }
    .end annotation
.end field

.field public static final CREATOR:Landroid/os/Parcelable$Creator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/os/Parcelable$Creator<",
            "Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;",
            ">;"
        }
    .end annotation
.end field

.field public static final DEFAULT_ANIMATE_TYPE:Ljava/lang/Integer;

.field public static final DEFAULT_BUTTON_TEXT:Ljava/lang/String; = ""

.field public static final DEFAULT_CLICK_TYPE:Ljava/lang/Integer;

.field public static final DEFAULT_DESC:Ljava/lang/String; = ""

.field public static final DEFAULT_ICON_URL:Ljava/lang/String; = ""

.field public static final DEFAULT_SCORE:Ljava/lang/Float;

.field public static final DEFAULT_SHOW_DELAY_SECS:Ljava/lang/Integer;

.field public static final DEFAULT_TITLE:Ljava/lang/String; = ""

.field private static final serialVersionUID:J


# instance fields
.field public final animate_type:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        tag = 0xa
    .end annotation
.end field

.field public final bar_color:Lcom/sigmob/sdk/base/models/rtb/Color;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "Color#ADAPTER"
        tag = 0x8
    .end annotation
.end field

.field public final button_color:Lcom/sigmob/sdk/base/models/rtb/Color;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "Color#ADAPTER"
        tag = 0x5
    .end annotation
.end field

.field public final button_text:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x4
    .end annotation
.end field

.field public final button_text_color:Lcom/sigmob/sdk/base/models/rtb/Color;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "Color#ADAPTER"
        tag = 0x6
    .end annotation
.end field

.field public final click_type:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        tag = 0x7
    .end annotation
.end field

.field public final desc:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x9
    .end annotation
.end field

.field public final icon_url:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x1
    .end annotation
.end field

.field public final score:Ljava/lang/Float;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#FLOAT"
        tag = 0x3
    .end annotation
.end field

.field public final show_delay_secs:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        tag = 0xb
    .end annotation
.end field

.field public final title:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x2
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$ProtoAdapter_CompanionEndcard;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$ProtoAdapter_CompanionEndcard;-><init>()V

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-static {v0}, Lcom/czhj/wire/AndroidMessage;->newCreator(Lcom/czhj/wire/ProtoAdapter;)Landroid/os/Parcelable$Creator;

    move-result-object v0

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->CREATOR:Landroid/os/Parcelable$Creator;

    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v0

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->DEFAULT_SCORE:Ljava/lang/Float;

    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->DEFAULT_CLICK_TYPE:Ljava/lang/Integer;

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->DEFAULT_ANIMATE_TYPE:Ljava/lang/Integer;

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->DEFAULT_SHOW_DELAY_SECS:Ljava/lang/Integer;

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Float;Ljava/lang/String;Lcom/sigmob/sdk/base/models/rtb/Color;Lcom/sigmob/sdk/base/models/rtb/Color;Ljava/lang/Integer;Lcom/sigmob/sdk/base/models/rtb/Color;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;)V
    .locals 13

    sget-object v12, Lcom/czhj/wire/okio/ByteString;->EMPTY:Lcom/czhj/wire/okio/ByteString;

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object/from16 v3, p3

    move-object/from16 v4, p4

    move-object/from16 v5, p5

    move-object/from16 v6, p6

    move-object/from16 v7, p7

    move-object/from16 v8, p8

    move-object/from16 v9, p9

    move-object/from16 v10, p10

    move-object/from16 v11, p11

    invoke-direct/range {v0 .. v12}, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Float;Ljava/lang/String;Lcom/sigmob/sdk/base/models/rtb/Color;Lcom/sigmob/sdk/base/models/rtb/Color;Ljava/lang/Integer;Lcom/sigmob/sdk/base/models/rtb/Color;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Lcom/czhj/wire/okio/ByteString;)V

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Float;Ljava/lang/String;Lcom/sigmob/sdk/base/models/rtb/Color;Lcom/sigmob/sdk/base/models/rtb/Color;Ljava/lang/Integer;Lcom/sigmob/sdk/base/models/rtb/Color;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Lcom/czhj/wire/okio/ByteString;)V
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-direct {p0, v0, p12}, Lcom/czhj/wire/AndroidMessage;-><init>(Lcom/czhj/wire/ProtoAdapter;Lcom/czhj/wire/okio/ByteString;)V

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->icon_url:Ljava/lang/String;

    iput-object p2, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->title:Ljava/lang/String;

    iput-object p3, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->score:Ljava/lang/Float;

    iput-object p4, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->button_text:Ljava/lang/String;

    iput-object p5, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->button_color:Lcom/sigmob/sdk/base/models/rtb/Color;

    iput-object p6, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->button_text_color:Lcom/sigmob/sdk/base/models/rtb/Color;

    iput-object p7, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->click_type:Ljava/lang/Integer;

    iput-object p8, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->bar_color:Lcom/sigmob/sdk/base/models/rtb/Color;

    iput-object p9, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->desc:Ljava/lang/String;

    iput-object p10, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->animate_type:Ljava/lang/Integer;

    iput-object p11, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->show_delay_secs:Ljava/lang/Integer;

    return-void
.end method


# virtual methods
.method public equals(Ljava/lang/Object;)Z
    .locals 4

    const/4 v0, 0x1

    if-ne p1, p0, :cond_0

    return v0

    :cond_0
    instance-of v1, p1, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;

    const/4 v2, 0x0

    if-nez v1, :cond_1

    return v2

    :cond_1
    check-cast p1, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/czhj/wire/okio/ByteString;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->icon_url:Ljava/lang/String;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->icon_url:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->title:Ljava/lang/String;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->title:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->score:Ljava/lang/Float;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->score:Ljava/lang/Float;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->button_text:Ljava/lang/String;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->button_text:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->button_color:Lcom/sigmob/sdk/base/models/rtb/Color;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->button_color:Lcom/sigmob/sdk/base/models/rtb/Color;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->button_text_color:Lcom/sigmob/sdk/base/models/rtb/Color;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->button_text_color:Lcom/sigmob/sdk/base/models/rtb/Color;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->click_type:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->click_type:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->bar_color:Lcom/sigmob/sdk/base/models/rtb/Color;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->bar_color:Lcom/sigmob/sdk/base/models/rtb/Color;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->desc:Ljava/lang/String;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->desc:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->animate_type:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->animate_type:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->show_delay_secs:Ljava/lang/Integer;

    iget-object p1, p1, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->show_delay_secs:Ljava/lang/Integer;

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

    if-nez v0, :cond_b

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/wire/okio/ByteString;->hashCode()I

    move-result v0

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->icon_url:Ljava/lang/String;

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_0

    :cond_0
    move v1, v2

    :goto_0
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->title:Ljava/lang/String;

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_1

    :cond_1
    move v1, v2

    :goto_1
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->score:Ljava/lang/Float;

    if-eqz v1, :cond_2

    invoke-virtual {v1}, Ljava/lang/Float;->hashCode()I

    move-result v1

    goto :goto_2

    :cond_2
    move v1, v2

    :goto_2
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->button_text:Ljava/lang/String;

    if-eqz v1, :cond_3

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_3

    :cond_3
    move v1, v2

    :goto_3
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->button_color:Lcom/sigmob/sdk/base/models/rtb/Color;

    if-eqz v1, :cond_4

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/rtb/Color;->hashCode()I

    move-result v1

    goto :goto_4

    :cond_4
    move v1, v2

    :goto_4
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->button_text_color:Lcom/sigmob/sdk/base/models/rtb/Color;

    if-eqz v1, :cond_5

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/rtb/Color;->hashCode()I

    move-result v1

    goto :goto_5

    :cond_5
    move v1, v2

    :goto_5
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->click_type:Ljava/lang/Integer;

    if-eqz v1, :cond_6

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_6

    :cond_6
    move v1, v2

    :goto_6
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->bar_color:Lcom/sigmob/sdk/base/models/rtb/Color;

    if-eqz v1, :cond_7

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/rtb/Color;->hashCode()I

    move-result v1

    goto :goto_7

    :cond_7
    move v1, v2

    :goto_7
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->desc:Ljava/lang/String;

    if-eqz v1, :cond_8

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_8

    :cond_8
    move v1, v2

    :goto_8
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->animate_type:Ljava/lang/Integer;

    if-eqz v1, :cond_9

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_9

    :cond_9
    move v1, v2

    :goto_9
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->show_delay_secs:Ljava/lang/Integer;

    if-eqz v1, :cond_a

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v2

    :cond_a
    add-int/2addr v0, v2

    iput v0, p0, Lcom/czhj/wire/AndroidMessage;->hashCode:I

    :cond_b
    return v0
.end method

.method public bridge synthetic newBuilder()Lcom/czhj/wire/Message$Builder;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->newBuilder()Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;

    move-result-object v0

    return-object v0
.end method

.method public newBuilder()Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;
    .locals 2

    new-instance v0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->icon_url:Ljava/lang/String;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;->icon_url:Ljava/lang/String;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->title:Ljava/lang/String;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;->title:Ljava/lang/String;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->score:Ljava/lang/Float;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;->score:Ljava/lang/Float;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->button_text:Ljava/lang/String;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;->button_text:Ljava/lang/String;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->button_color:Lcom/sigmob/sdk/base/models/rtb/Color;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;->button_color:Lcom/sigmob/sdk/base/models/rtb/Color;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->button_text_color:Lcom/sigmob/sdk/base/models/rtb/Color;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;->button_text_color:Lcom/sigmob/sdk/base/models/rtb/Color;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->click_type:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;->click_type:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->bar_color:Lcom/sigmob/sdk/base/models/rtb/Color;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;->bar_color:Lcom/sigmob/sdk/base/models/rtb/Color;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->desc:Ljava/lang/String;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;->desc:Ljava/lang/String;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->animate_type:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;->animate_type:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->show_delay_secs:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;->show_delay_secs:Ljava/lang/Integer;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;->addUnknownFields(Lcom/czhj/wire/okio/ByteString;)Lcom/czhj/wire/Message$Builder;

    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->icon_url:Ljava/lang/String;

    if-eqz v1, :cond_0

    const-string v1, ", icon_url="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->icon_url:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_0
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->title:Ljava/lang/String;

    if-eqz v1, :cond_1

    const-string v1, ", title="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->title:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_1
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->score:Ljava/lang/Float;

    if-eqz v1, :cond_2

    const-string v1, ", score="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->score:Ljava/lang/Float;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_2
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->button_text:Ljava/lang/String;

    if-eqz v1, :cond_3

    const-string v1, ", button_text="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->button_text:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_3
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->button_color:Lcom/sigmob/sdk/base/models/rtb/Color;

    if-eqz v1, :cond_4

    const-string v1, ", button_color="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->button_color:Lcom/sigmob/sdk/base/models/rtb/Color;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_4
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->button_text_color:Lcom/sigmob/sdk/base/models/rtb/Color;

    if-eqz v1, :cond_5

    const-string v1, ", button_text_color="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->button_text_color:Lcom/sigmob/sdk/base/models/rtb/Color;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_5
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->click_type:Ljava/lang/Integer;

    if-eqz v1, :cond_6

    const-string v1, ", click_type="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->click_type:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_6
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->bar_color:Lcom/sigmob/sdk/base/models/rtb/Color;

    if-eqz v1, :cond_7

    const-string v1, ", bar_color="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->bar_color:Lcom/sigmob/sdk/base/models/rtb/Color;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_7
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->desc:Ljava/lang/String;

    if-eqz v1, :cond_8

    const-string v1, ", desc="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->desc:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_8
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->animate_type:Ljava/lang/Integer;

    if-eqz v1, :cond_9

    const-string v1, ", animate_type="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->animate_type:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_9
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->show_delay_secs:Ljava/lang/Integer;

    if-eqz v1, :cond_a

    const-string v1, ", show_delay_secs="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->show_delay_secs:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_a
    const/4 v1, 0x0

    const/4 v2, 0x2

    const-string v3, "CompanionEndcard{"

    invoke-virtual {v0, v1, v2, v3}, Ljava/lang/StringBuilder;->replace(IILjava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    const/16 v1, 0x7d

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
