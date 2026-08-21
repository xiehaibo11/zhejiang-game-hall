.class final Lcom/czhj/wire/protobuf/FieldDescriptorProto$Label$ProtoAdapter_Label;
.super Lcom/czhj/wire/EnumAdapter;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/wire/protobuf/FieldDescriptorProto$Label;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "ProtoAdapter_Label"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/EnumAdapter<",
        "Lcom/czhj/wire/protobuf/FieldDescriptorProto$Label;",
        ">;"
    }
.end annotation


# direct methods
.method constructor <init>()V
    .locals 1

    const-class v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Label;

    invoke-direct {p0, v0}, Lcom/czhj/wire/EnumAdapter;-><init>(Ljava/lang/Class;)V

    return-void
.end method


# virtual methods
.method protected bridge synthetic fromValue(I)Lcom/czhj/wire/WireEnum;
    .locals 0

    invoke-virtual {p0, p1}, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Label$ProtoAdapter_Label;->fromValue(I)Lcom/czhj/wire/protobuf/FieldDescriptorProto$Label;

    move-result-object p1

    return-object p1
.end method

.method protected fromValue(I)Lcom/czhj/wire/protobuf/FieldDescriptorProto$Label;
    .locals 0

    invoke-static {p1}, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Label;->fromValue(I)Lcom/czhj/wire/protobuf/FieldDescriptorProto$Label;

    move-result-object p1

    return-object p1
.end method
