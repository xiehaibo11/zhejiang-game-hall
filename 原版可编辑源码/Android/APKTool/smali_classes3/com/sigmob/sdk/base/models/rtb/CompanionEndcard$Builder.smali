.class public final Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;",
        "Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public animate_type:Ljava/lang/Integer;

.field public bar_color:Lcom/sigmob/sdk/base/models/rtb/Color;

.field public button_color:Lcom/sigmob/sdk/base/models/rtb/Color;

.field public button_text:Ljava/lang/String;

.field public button_text_color:Lcom/sigmob/sdk/base/models/rtb/Color;

.field public click_type:Ljava/lang/Integer;

.field public desc:Ljava/lang/String;

.field public icon_url:Ljava/lang/String;

.field public score:Ljava/lang/Float;

.field public show_delay_secs:Ljava/lang/Integer;

.field public title:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;-><init>()V

    const-string v0, ""

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;->icon_url:Ljava/lang/String;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;->title:Ljava/lang/String;

    sget-object v1, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->DEFAULT_SCORE:Ljava/lang/Float;

    iput-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;->score:Ljava/lang/Float;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;->button_text:Ljava/lang/String;

    sget-object v1, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->DEFAULT_CLICK_TYPE:Ljava/lang/Integer;

    iput-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;->click_type:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;->desc:Ljava/lang/String;

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->DEFAULT_ANIMATE_TYPE:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;->animate_type:Ljava/lang/Integer;

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->DEFAULT_SHOW_DELAY_SECS:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;->show_delay_secs:Ljava/lang/Integer;

    return-void
.end method


# virtual methods
.method public animate_type(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;->animate_type:Ljava/lang/Integer;

    return-object p0
.end method

.method public bar_color(Lcom/sigmob/sdk/base/models/rtb/Color;)Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;->bar_color:Lcom/sigmob/sdk/base/models/rtb/Color;

    return-object p0
.end method

.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;->build()Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;

    move-result-object v0

    return-object v0
.end method

.method public build()Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;
    .locals 14

    new-instance v13, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;->icon_url:Ljava/lang/String;

    iget-object v2, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;->title:Ljava/lang/String;

    iget-object v3, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;->score:Ljava/lang/Float;

    iget-object v4, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;->button_text:Ljava/lang/String;

    iget-object v5, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;->button_color:Lcom/sigmob/sdk/base/models/rtb/Color;

    iget-object v6, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;->button_text_color:Lcom/sigmob/sdk/base/models/rtb/Color;

    iget-object v7, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;->click_type:Ljava/lang/Integer;

    iget-object v8, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;->bar_color:Lcom/sigmob/sdk/base/models/rtb/Color;

    iget-object v9, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;->desc:Ljava/lang/String;

    iget-object v10, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;->animate_type:Ljava/lang/Integer;

    iget-object v11, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;->show_delay_secs:Ljava/lang/Integer;

    invoke-super {p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v12

    move-object v0, v13

    invoke-direct/range {v0 .. v12}, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Float;Ljava/lang/String;Lcom/sigmob/sdk/base/models/rtb/Color;Lcom/sigmob/sdk/base/models/rtb/Color;Ljava/lang/Integer;Lcom/sigmob/sdk/base/models/rtb/Color;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Lcom/czhj/wire/okio/ByteString;)V

    return-object v13
.end method

.method public button_color(Lcom/sigmob/sdk/base/models/rtb/Color;)Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;->button_color:Lcom/sigmob/sdk/base/models/rtb/Color;

    return-object p0
.end method

.method public button_text(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;->button_text:Ljava/lang/String;

    return-object p0
.end method

.method public button_text_color(Lcom/sigmob/sdk/base/models/rtb/Color;)Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;->button_text_color:Lcom/sigmob/sdk/base/models/rtb/Color;

    return-object p0
.end method

.method public click_type(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;->click_type:Ljava/lang/Integer;

    return-object p0
.end method

.method public desc(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;->desc:Ljava/lang/String;

    return-object p0
.end method

.method public icon_url(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;->icon_url:Ljava/lang/String;

    return-object p0
.end method

.method public score(Ljava/lang/Float;)Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;->score:Ljava/lang/Float;

    return-object p0
.end method

.method public show_delay_secs(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;->show_delay_secs:Ljava/lang/Integer;

    return-object p0
.end method

.method public title(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard$Builder;->title:Ljava/lang/String;

    return-object p0
.end method
