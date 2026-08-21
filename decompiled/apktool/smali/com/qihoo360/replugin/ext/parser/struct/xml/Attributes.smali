.class public Lcom/qihoo360/replugin/ext/parser/struct/xml/Attributes;
.super Ljava/lang/Object;
.source "Attributes.java"


# instance fields
.field private final attributes:[Lcom/qihoo360/replugin/ext/parser/struct/xml/Attribute;


# direct methods
.method public constructor <init>(I)V
    .locals 0

    .line 38
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 39
    new-array p1, p1, [Lcom/qihoo360/replugin/ext/parser/struct/xml/Attribute;

    iput-object p1, p0, Lcom/qihoo360/replugin/ext/parser/struct/xml/Attributes;->attributes:[Lcom/qihoo360/replugin/ext/parser/struct/xml/Attribute;

    return-void
.end method


# virtual methods
.method public get(Ljava/lang/String;)Ljava/lang/String;
    .locals 5

    .line 47
    iget-object v0, p0, Lcom/qihoo360/replugin/ext/parser/struct/xml/Attributes;->attributes:[Lcom/qihoo360/replugin/ext/parser/struct/xml/Attribute;

    array-length v1, v0

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_1

    aget-object v3, v0, v2

    .line 48
    invoke-virtual {v3}, Lcom/qihoo360/replugin/ext/parser/struct/xml/Attribute;->getName()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v4, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_0

    .line 49
    invoke-virtual {v3}, Lcom/qihoo360/replugin/ext/parser/struct/xml/Attribute;->getValue()Ljava/lang/String;

    move-result-object p1

    return-object p1

    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_1
    const/4 p1, 0x0

    return-object p1
.end method

.method public getBoolean(Ljava/lang/String;Z)Z
    .locals 0

    .line 60
    invoke-virtual {p0, p1}, Lcom/qihoo360/replugin/ext/parser/struct/xml/Attributes;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    if-nez p1, :cond_0

    goto :goto_0

    .line 61
    :cond_0
    invoke-static {p1}, Ljava/lang/Boolean;->parseBoolean(Ljava/lang/String;)Z

    move-result p2

    :goto_0
    return p2
.end method

.method public getInt(Ljava/lang/String;)Ljava/lang/Integer;
    .locals 1

    .line 65
    invoke-virtual {p0, p1}, Lcom/qihoo360/replugin/ext/parser/struct/xml/Attributes;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    if-nez p1, :cond_0

    const/4 p1, 0x0

    return-object p1

    :cond_0
    const-string v0, "0x"

    .line 69
    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 v0, 0x2

    .line 70
    invoke-virtual {p1, v0}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p1

    const/16 v0, 0x10

    invoke-static {p1, v0}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;I)Ljava/lang/Integer;

    move-result-object p1

    return-object p1

    .line 72
    :cond_1
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object p1

    return-object p1
.end method

.method public getLong(Ljava/lang/String;)Ljava/lang/Long;
    .locals 1

    .line 76
    invoke-virtual {p0, p1}, Lcom/qihoo360/replugin/ext/parser/struct/xml/Attributes;->get(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    if-nez p1, :cond_0

    const/4 p1, 0x0

    return-object p1

    :cond_0
    const-string v0, "0x"

    .line 80
    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 v0, 0x2

    .line 81
    invoke-virtual {p1, v0}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p1

    const/16 v0, 0x10

    invoke-static {p1, v0}, Ljava/lang/Long;->valueOf(Ljava/lang/String;I)Ljava/lang/Long;

    move-result-object p1

    return-object p1

    .line 83
    :cond_1
    invoke-static {p1}, Ljava/lang/Long;->valueOf(Ljava/lang/String;)Ljava/lang/Long;

    move-result-object p1

    return-object p1
.end method

.method public set(ILcom/qihoo360/replugin/ext/parser/struct/xml/Attribute;)V
    .locals 1

    .line 43
    iget-object v0, p0, Lcom/qihoo360/replugin/ext/parser/struct/xml/Attributes;->attributes:[Lcom/qihoo360/replugin/ext/parser/struct/xml/Attribute;

    aput-object p2, v0, p1

    return-void
.end method

.method public size()I
    .locals 1

    .line 56
    iget-object v0, p0, Lcom/qihoo360/replugin/ext/parser/struct/xml/Attributes;->attributes:[Lcom/qihoo360/replugin/ext/parser/struct/xml/Attribute;

    array-length v0, v0

    return v0
.end method

.method public value()[Lcom/qihoo360/replugin/ext/parser/struct/xml/Attribute;
    .locals 1

    .line 87
    iget-object v0, p0, Lcom/qihoo360/replugin/ext/parser/struct/xml/Attributes;->attributes:[Lcom/qihoo360/replugin/ext/parser/struct/xml/Attribute;

    return-object v0
.end method
