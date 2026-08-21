.class public final Lcom/sigmob/sdk/base/models/config/DialogSetting$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/base/models/config/DialogSetting;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/sigmob/sdk/base/models/config/DialogSetting;",
        "Lcom/sigmob/sdk/base/models/config/DialogSetting$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public body_text:Ljava/lang/String;

.field public cancel_button_text:Ljava/lang/String;

.field public close_button_text:Ljava/lang/String;

.field public title:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;-><init>()V

    const-string v0, ""

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/config/DialogSetting$Builder;->title:Ljava/lang/String;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/config/DialogSetting$Builder;->body_text:Ljava/lang/String;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/config/DialogSetting$Builder;->cancel_button_text:Ljava/lang/String;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/config/DialogSetting$Builder;->close_button_text:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public body_text(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/config/DialogSetting$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/DialogSetting$Builder;->body_text:Ljava/lang/String;

    return-object p0
.end method

.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/config/DialogSetting$Builder;->build()Lcom/sigmob/sdk/base/models/config/DialogSetting;

    move-result-object v0

    return-object v0
.end method

.method public build()Lcom/sigmob/sdk/base/models/config/DialogSetting;
    .locals 7

    new-instance v6, Lcom/sigmob/sdk/base/models/config/DialogSetting;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/DialogSetting$Builder;->title:Ljava/lang/String;

    iget-object v2, p0, Lcom/sigmob/sdk/base/models/config/DialogSetting$Builder;->body_text:Ljava/lang/String;

    iget-object v3, p0, Lcom/sigmob/sdk/base/models/config/DialogSetting$Builder;->cancel_button_text:Ljava/lang/String;

    iget-object v4, p0, Lcom/sigmob/sdk/base/models/config/DialogSetting$Builder;->close_button_text:Ljava/lang/String;

    invoke-super {p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v5

    move-object v0, v6

    invoke-direct/range {v0 .. v5}, Lcom/sigmob/sdk/base/models/config/DialogSetting;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/czhj/wire/okio/ByteString;)V

    return-object v6
.end method

.method public cancel_button_text(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/config/DialogSetting$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/DialogSetting$Builder;->cancel_button_text:Ljava/lang/String;

    return-object p0
.end method

.method public close_button_text(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/config/DialogSetting$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/DialogSetting$Builder;->close_button_text:Ljava/lang/String;

    return-object p0
.end method

.method public title(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/config/DialogSetting$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/DialogSetting$Builder;->title:Ljava/lang/String;

    return-object p0
.end method
