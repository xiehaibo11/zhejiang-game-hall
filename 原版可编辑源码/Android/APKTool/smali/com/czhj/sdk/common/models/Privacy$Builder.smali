.class public final Lcom/czhj/sdk/common/models/Privacy$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/sdk/common/models/Privacy;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/czhj/sdk/common/models/Privacy;",
        "Lcom/czhj/sdk/common/models/Privacy$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public age:Ljava/lang/Integer;

.field public child_protection:Ljava/lang/Integer;

.field public gdpr_consent:Ljava/lang/Integer;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;-><init>()V

    sget-object v0, Lcom/czhj/sdk/common/models/Privacy;->DEFAULT_GDPR_CONSENT:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/Privacy$Builder;->gdpr_consent:Ljava/lang/Integer;

    sget-object v0, Lcom/czhj/sdk/common/models/Privacy;->DEFAULT_CHILD_PROTECTION:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/Privacy$Builder;->child_protection:Ljava/lang/Integer;

    sget-object v0, Lcom/czhj/sdk/common/models/Privacy;->DEFAULT_AGE:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/Privacy$Builder;->age:Ljava/lang/Integer;

    return-void
.end method


# virtual methods
.method public age(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/Privacy$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Privacy$Builder;->age:Ljava/lang/Integer;

    return-object p0
.end method

.method public build()Lcom/czhj/sdk/common/models/Privacy;
    .locals 5

    new-instance v0, Lcom/czhj/sdk/common/models/Privacy;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Privacy$Builder;->gdpr_consent:Ljava/lang/Integer;

    iget-object v2, p0, Lcom/czhj/sdk/common/models/Privacy$Builder;->child_protection:Ljava/lang/Integer;

    iget-object v3, p0, Lcom/czhj/sdk/common/models/Privacy$Builder;->age:Ljava/lang/Integer;

    invoke-super {p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v4

    invoke-direct {v0, v1, v2, v3, v4}, Lcom/czhj/sdk/common/models/Privacy;-><init>(Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Lcom/czhj/wire/okio/ByteString;)V

    return-object v0
.end method

.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/czhj/sdk/common/models/Privacy$Builder;->build()Lcom/czhj/sdk/common/models/Privacy;

    move-result-object v0

    return-object v0
.end method

.method public child_protection(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/Privacy$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Privacy$Builder;->child_protection:Ljava/lang/Integer;

    return-object p0
.end method

.method public gdpr_consent(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/Privacy$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Privacy$Builder;->gdpr_consent:Ljava/lang/Integer;

    return-object p0
.end method
