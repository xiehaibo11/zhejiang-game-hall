.class final Lcom/czhj/wire/protobuf/FieldOptions$CType$ProtoAdapter_CType;
.super Lcom/czhj/wire/EnumAdapter;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/wire/protobuf/FieldOptions$CType;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "ProtoAdapter_CType"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/EnumAdapter<",
        "Lcom/czhj/wire/protobuf/FieldOptions$CType;",
        ">;"
    }
.end annotation


# direct methods
.method constructor <init>()V
    .locals 1

    const-class v0, Lcom/czhj/wire/protobuf/FieldOptions$CType;

    invoke-direct {p0, v0}, Lcom/czhj/wire/EnumAdapter;-><init>(Ljava/lang/Class;)V

    return-void
.end method


# virtual methods
.method protected bridge synthetic fromValue(I)Lcom/czhj/wire/WireEnum;
    .locals 0

    invoke-virtual {p0, p1}, Lcom/czhj/wire/protobuf/FieldOptions$CType$ProtoAdapter_CType;->fromValue(I)Lcom/czhj/wire/protobuf/FieldOptions$CType;

    move-result-object p1

    return-object p1
.end method

.method protected fromValue(I)Lcom/czhj/wire/protobuf/FieldOptions$CType;
    .locals 0

    invoke-static {p1}, Lcom/czhj/wire/protobuf/FieldOptions$CType;->fromValue(I)Lcom/czhj/wire/protobuf/FieldOptions$CType;

    move-result-object p1

    return-object p1
.end method
