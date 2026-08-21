<GameFile>
  <PropertyGroup Name="MailInfoItem" Type="Layer" ID="5gdk9mnc0zlyb4tv2is1pjou6-3qerfh78ax" Version="3.10.0.0" />
  <Content ctype="GameProjectContent">
    <Content>
      <Animation Duration="0" Speed="1.000000">
      </Animation>
      <ObjectData Name="Layer" ctype="GameNodeObjectData">
        <Size X="710.000000" Y="165.000000" />
        <Children>
          <AbstractNodeData Name="_KW_MAIL_DETAIL_ITEM" ActionTag="-954401934" Tag="101" RotationSkewX="0" RotationSkewY="0" LeftMargin="0" RightMargin="0" TopMargin="0" BottomMargin="0" ComboBoxIndex="1" BackColorAlpha="0" LeftEage="0" RightEage="0" TopEage="0" BottomEage="0" Scale9OriginX="0" Scale9OriginY="0" Scale9Width="1" Scale9Height="1" ctype="PanelObjectData">
            <Size Y="165" X="710" />
            <AnchorPoint ScaleX="0.5" ScaleY="0.5" />
            <Position X="355" Y="82.5" />
            <Scale ScaleX="1" ScaleY="1" />
            <CColor A="255" B="255" G="255" R="255" />
            <FileData />
            <FirstColor A="255" B="255" G="200" R="150" />
            <EndColor A="255" B="255" G="255" R="255" />
            <ColorVector ScaleX="0" ScaleY="1" />
            <SingleColor A="255" B="255" G="200" R="150" />
            <Children>
              <AbstractNodeData Name="KW_MAIL_BG" ActionTag="2146084563" Tag="93" RotationSkewX="0" RotationSkewY="0" LeftMargin="20.5" RightMargin="20.5" TopMargin="8" BottomMargin="8" LeftEage="30" RightEage="30" TopEage="30" BottomEage="30" Scale9OriginX="30" Scale9OriginY="30" Scale9Width="612" Scale9Height="90" Scale9Enable="True" ctype="ImageViewObjectData">
                <Size Y="149" X="669" />
                <AnchorPoint ScaleX="0.5" ScaleY="0.5" />
                <Position X="355" Y="82.5" />
                <Scale ScaleX="1" ScaleY="1" />
                <CColor A="255" B="255" G="255" R="255" />
                <FileData Type="PlistSubImage" Path="mail_image_infobg.png" Plist="hall/Image/mailLayer.plist" />
                <Children>
                  <AbstractNodeData Name="_KW_MAIL_INFO_ICON" ActionTag="-1182491334" Tag="94" RotationSkewX="0" RotationSkewY="0" LeftMargin="67" RightMargin="486" TopMargin="17.5" BottomMargin="12.5" HorizontalEdge="LeftEdge" VerticalEdge="TopEdge" LeftEage="43" RightEage="43" TopEage="44" BottomEage="44" Scale9OriginX="43" Scale9OriginY="44" Scale9Width="30" Scale9Height="31" ctype="ImageViewObjectData">
                    <Size Y="119" X="116" />
                    <AnchorPoint ScaleX="0.5" ScaleY="0.5" />
                    <Position X="125" Y="72" />
                    <Scale ScaleX="1" ScaleY="1" />
                    <CColor A="255" B="255" G="255" R="255" />
                    <FileData Type="PlistSubImage" Path="mail_image_read.png" Plist="hall/Image/mailLayer.plist" />
                    <Children>
                      <AbstractNodeData Name="_KW_AWARD_BOX" ActionTag="-1648506376" Tag="95" RotationSkewX="0" RotationSkewY="0" LeftMargin="71.108902" RightMargin="-4.1089" TopMargin="56.9743" BottomMargin="15.0257" LeftEage="19" RightEage="19" TopEage="22" BottomEage="22" Scale9OriginX="19" Scale9OriginY="22" Scale9Width="11" Scale9Height="3" ctype="ImageViewObjectData">
                        <Size Y="47" X="49" />
                        <AnchorPoint ScaleX="0.5" ScaleY="0.5" />
                        <Position X="95.608902" Y="38.5257" />
                        <Scale ScaleX="1" ScaleY="1" />
                        <CColor A="255" B="255" G="255" R="255" />
                        <FileData Type="PlistSubImage" Path="mail_image_box.png" Plist="hall/Image/mailLayer.plist" />
                      </AbstractNodeData>
                      <AbstractNodeData Name="_KW_MAIL_RED_POINT" ActionTag="-905170444" Tag="96" RotationSkewX="0" RotationSkewY="0" LeftMargin="3.65" RightMargin="84.349998" TopMargin="5" BottomMargin="86" LeftEage="9" RightEage="9" TopEage="9" BottomEage="9" Scale9OriginX="9" Scale9OriginY="9" Scale9Width="10" Scale9Height="10" ctype="ImageViewObjectData">
                        <Size Y="28" X="28" />
                        <AnchorPoint ScaleX="0.5" ScaleY="0.5" />
                        <Position X="17.65" Y="100" />
                        <Scale ScaleX="1" ScaleY="1" />
                        <CColor A="255" B="255" G="255" R="255" />
                        <FileData Type="PlistSubImage" Path="mail_image_redpoint.png" Plist="hall/Image/mailLayer.plist" />
                      </AbstractNodeData>
                    </Children>
                  </AbstractNodeData>
                  <AbstractNodeData Name="_KW_MAIL_CHECKBOX" ActionTag="1068425383" Tag="97" RotationSkewX="0" RotationSkewY="0" LeftMargin="13.121" RightMargin="605.879028" TopMargin="50" BottomMargin="50" TouchEnable="True" ctype="CheckBoxObjectData">
                    <Size Y="49" X="50" />
                    <AnchorPoint ScaleX="0.5" ScaleY="0.5" />
                    <Position X="38.120998" Y="74.5" />
                    <Scale ScaleX="1.4" ScaleY="1.4" />
                    <CColor A="255" B="255" G="255" R="255" />
                    <NormalBackFileData Type="PlistSubImage" Path="mail_checkbox_normal.png" Plist="hall/Image/mailLayer.plist" />
                    <PressedBackFileData Type="PlistSubImage" Path="mail_checkbox_normal.png" Plist="hall/Image/mailLayer.plist" />
                    <DisableBackFileData Type="PlistSubImage" Path="mail_checkbox_normal.png" Plist="hall/Image/mailLayer.plist" />
                    <NodeNormalFileData Type="PlistSubImage" Path="mail_checkbox_selected.png" Plist="hall/Image/mailLayer.plist" />
                    <NodeDisableFileData Type="PlistSubImage" Path="mail_checkbox_selected.png" Plist="hall/Image/mailLayer.plist" />
                  </AbstractNodeData>
                  <AbstractNodeData Name="_KW_BMFONT_MAIL_TITLE" ActionTag="-804918055" Tag="255" RotationSkewX="0" RotationSkewY="0" LeftMargin="200" RightMargin="200" TopMargin="23.377899" BottomMargin="93.622101" LabelText="标题也要十个字真难呐" ctype="TextBMFontObjectData">
                    <Size Y="32" X="269" />
                    <AnchorPoint ScaleX="0" ScaleY="0.5" />
                    <Position X="200" Y="109.622101" />
                    <Scale ScaleX="1.26" ScaleY="1.26" />
                    <CColor A="255" B="72" G="111" R="163" />
                    <LabelBMFontFile_CNB Type="Normal" Path="Common/Font/fangzhengcuyuan_bitmap32.fnt" Plist="" />
                  </AbstractNodeData>
                  <AbstractNodeData Name="_KW_BMFONT_MAIL_TIME" ActionTag="1969420782" Tag="256" RotationSkewX="0" RotationSkewY="0" LeftMargin="501.448212" RightMargin="27.5518" TopMargin="101.261703" BottomMargin="15.7383" LabelText="剩余23小时" ctype="TextBMFontObjectData">
                    <Size Y="32" X="140" />
                    <AnchorPoint ScaleX="0" ScaleY="0.5" />
                    <Position X="501.448212" Y="31.7383" />
                    <Scale ScaleX="1.02" ScaleY="1.02" />
                    <CColor A="255" B="153" G="161" R="23" />
                    <LabelBMFontFile_CNB Type="Normal" Path="Common/Font/fangzhengcuyuan_bitmap32.fnt" Plist="" />
                  </AbstractNodeData>
                  <AbstractNodeData Name="_KW_MAIL_TITLE" Visible="False" ActionTag="1180021349" Tag="98" RotationSkewX="0" RotationSkewY="0" LeftMargin="200" RightMargin="128" TopMargin="19" BottomMargin="90" FontSize="34" LabelText="标题也要十个字真难呐" OutlineSize="1" ShadowOffsetX="2" ShadowOffsetY="-2" ctype="TextObjectData">
                    <Size Y="40" X="341" />
                    <AnchorPoint ScaleX="0" ScaleY="0.5" />
                    <Position X="200" Y="110" />
                    <Scale ScaleX="1" ScaleY="1" />
                    <CColor A="255" B="72" G="111" R="163" />
                    <FontResource Type="Normal" Path="Common/Font/fangzhengcuyuan.TTF" Plist="" />
                    <OutlineColor A="255" B="0" G="0" R="255" />
                    <ShadowColor A="255" B="110" G="110" R="110" />
                  </AbstractNodeData>
                  <AbstractNodeData Name="_KW_MAIL_DESC" ActionTag="2037032555" Tag="99" RotationSkewX="0" RotationSkewY="0" LeftMargin="200" RightMargin="215" TopMargin="68" BottomMargin="15" FontSize="28" LabelText="这里要放十五个字哦
凑凑还是有的" IsCustomSize="True" OutlineSize="1" ShadowOffsetX="2" ShadowOffsetY="-2" ctype="TextObjectData">
                    <Size Y="66" X="254" />
                    <AnchorPoint ScaleX="0" ScaleY="0.5" />
                    <Position X="200" Y="48" />
                    <Scale ScaleX="1" ScaleY="1" />
                    <CColor A="255" B="72" G="111" R="163" />
                    <FontResource Type="Normal" Path="Common/Font/fangzhengcuyuan.TTF" Plist="" />
                    <OutlineColor A="255" B="0" G="0" R="255" />
                    <ShadowColor A="255" B="110" G="110" R="110" />
                  </AbstractNodeData>
                  <AbstractNodeData Name="_KW_MAIL_TIME" Visible="False" ActionTag="-1387300638" Tag="100" RotationSkewX="0" RotationSkewY="0" LeftMargin="499" RightMargin="24" TopMargin="101" BottomMargin="15" HorizontalEdge="RightEdge" VerticalEdge="BottomEdge" FontSize="28" LabelText="剩余23小时" OutlineSize="1" ShadowOffsetX="2" ShadowOffsetY="-2" ctype="TextObjectData">
                    <Size Y="33" X="146" />
                    <AnchorPoint ScaleX="0.5" ScaleY="0.5" />
                    <Position X="572" Y="31.5" />
                    <Scale ScaleX="1" ScaleY="1" />
                    <CColor A="255" B="153" G="161" R="23" />
                    <FontResource Type="Normal" Path="Common/Font/fangzhengcuyuan.TTF" Plist="" />
                    <OutlineColor A="255" B="0" G="0" R="255" />
                    <ShadowColor A="255" B="110" G="110" R="110" />
                  </AbstractNodeData>
                </Children>
              </AbstractNodeData>
            </Children>
          </AbstractNodeData>
        </Children>
      </ObjectData>
    </Content>
  </Content>
</GameFile>
